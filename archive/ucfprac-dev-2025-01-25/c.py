import math

s = int(input()) + 1
print("Looking for", s)
n = math.ceil(s / 4)
print("Squares per quarter (rounded up)", n)
m = math.floor(math.sqrt(n))
print("Number on the side", m)
# y = round((n - (m ** 2)) / 2 + 1)
y = math.floor((math.floor(math.sqrt(n)) ** 2) / 2)
# sqrt(4 ^2 + 4^2)
print(y)
if m == 1 and y != 0:
    print(math.sqrt(2 * m ** 2))
else:
    print(math.sqrt(m ** 2 + y ** 2))