a, b = map(int, input().split())
for x in range(a, b + 1):
    if x % 15 == 0:
        print("FizzBuzz", end="")
    elif x % 5 == 0:
        print("Buzz", end="")
    elif x % 3 == 0:
        print("Fizz", end="")
    else:
        print(x, end="")
    print(" " if x < b else "\n", end="")