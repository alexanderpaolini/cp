int ternary_search(vector<int> &arr, int left, int right, int target)
{
    while (right >= left)
    {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (arr[mid1] == target)
        {
            return mid1;
        }
        if (arr[mid2] == target)
        {
            return mid2;
        }

        if (target < arr[mid1])
        {
            right = mid1 - 1;
        }
        else if (target > arr[mid2])
        {
            left = mid2 + 1;
        }
        else
        {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }

    return -1;
}
