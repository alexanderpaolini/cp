class BigInt
{
public:
    vector<int> digits;

    BigInt(const string &num)
    {
        for (int i = num.size() - 1; i >= 0; --i)
        {
            digits.push_back(num[i] - '0');
        }
    }

    void print() const
    {
        for (int i = digits.size() - 1; i >= 0; --i)
        {
            cout << digits[i];
        }
        cout << endl;
    }

    BigInt operator+(const BigInt &other) const
    {
        int carry = 0;
        vector<int> result;

        int size = max(digits.size(), other.digits.size());
        for (int i = 0; i < size || carry; ++i)
        {
            int sum = carry;
            if (i < digits.size())
                sum += digits[i];
            if (i < other.digits.size())
                sum += other.digits[i];
            result.push_back(sum % 10);
            carry = sum / 10;
        }

        BigInt res("");
        res.digits = result;
        return res;
    }

    BigInt operator-(const BigInt &other) const
    {
        vector<int> result;
        int borrow = 0;

        for (int i = 0; i < digits.size(); ++i)
        {
            int diff = digits[i] - borrow;
            if (i < other.digits.size())
                diff -= other.digits[i];

            if (diff < 0)
            {
                diff += 10;
                borrow = 1;
            }
            else
            {
                borrow = 0;
            }

            result.push_back(diff);
        }

        // Remove leading zeros
        while (result.size() > 1 && result.back() == 0)
        {
            result.pop_back();
        }

        BigInt res("");
        res.digits = result;
        return res;
    }

    BigInt operator*(const BigInt &other) const
    {
        vector<int> result(digits.size() + other.digits.size(), 0);

        for (int i = 0; i < digits.size(); ++i)
        {
            for (int j = 0; j < other.digits.size(); ++j)
            {
                result[i + j] += digits[i] * other.digits[j];
                if (result[i + j] >= 10)
                {
                    result[i + j + 1] += result[i + j] / 10;
                    result[i + j] %= 10;
                }
            }
        }

        BigInt res("");
        res.digits = result;
        // Remove leading zeros
        while (res.digits.size() > 1 && res.digits.back() == 0)
        {
            res.digits.pop_back();
        }
        return res;
    }

    BigInt operator/(const BigInt &other) const
    {
        BigInt quotient("0");
        BigInt remainder = *this;

        while (remainder >= other)
        {
            BigInt temp("1");
            BigInt multiplier("1");

            // Double the divisor and the multiplier until it exceeds the remainder
            while (remainder >= (other * temp))
            {
                temp = temp * BigInt("2");
                multiplier = multiplier * BigInt("2");
            }

            remainder = remainder - (other * (temp / BigInt("2")));
            quotient = quotient + multiplier;
        }

        return quotient;
    }

    bool operator>=(const BigInt &other) const
    {
        if (digits.size() != other.digits.size())
        {
            return digits.size() > other.digits.size();
        }

        for (int i = digits.size() - 1; i >= 0; --i)
        {
            if (digits[i] != other.digits[i])
            {
                return digits[i] > other.digits[i];
            }
        }
        return true;
    }

    friend istream &operator>>(istream &is, BigInt &bigInt)
    {
        string input;
        is >> input;

        bigInt.digits.clear(); // Clear any previous digits
        for (int i = input.size() - 1; i >= 0; --i)
        {
            if (input[i] >= '0' && input[i] <= '9')
            {
                bigInt.digits.push_back(input[i] - '0');
            }
        }

        return is;
    }
};
