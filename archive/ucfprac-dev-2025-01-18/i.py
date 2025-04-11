import math

s = int(input(), base=2)
d = int(input(), base=2)
m = int(input(), base=2)
s_m = m

i = 0
while (m != 0):
    m = m - math.ceil(m / 2)
    i += 1
    if i % d == 0 and i != 0:
        m += s
    if i > d and m > s_m:
        print("Infinite money!")
        exit(0)

i = int(bin(i)[2:])

print(i)