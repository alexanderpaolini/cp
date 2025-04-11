import math

# n(log_2(n))^(c * sqrt(2)) / (p * 10^9) == s (1 + 1/c) /v
n = int(input())
p = float(input())
s = float(input())
v = float(input())

def left(c):
    return n * math.pow(math.log2(n), c * math.sqrt(2)) / (p * math.pow(10, 9))

def right(c):
    return (1 + 1/c)

l = 1.1
r = 10 **10
mid = (l + r) / 2
print(mid)
v = left(mid) - right(mid)
while v != 0:
    if v > 0:
        l = mid
    else:
        r = mid
    # print(left(mid), (mid), l, r)
    mid = (l + r) / 2
    v = left(mid) - right(mid)