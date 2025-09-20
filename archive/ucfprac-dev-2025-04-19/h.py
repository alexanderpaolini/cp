# Did not complete this one.
import math

l, m = map(int, input().split())

MINUTES_IN_WEEK = 60 * 24 * 7

# (name, price)
ms = []
for _ in range(m):
    n, p, c, t, r = input().split(',')
    p = int(p)
    c = int(c)
    t = int(t)
    r = int(r)
    
    area_per_cycle = c * t
    num_cycles = l / area_per_cycle
    total_time = num_cycles * (t + r) - r
    
    if (MINUTES_IN_WEEK - total_time) - r <= r / 2:
        ms.append((n, p))

if not ms:
    print("no such mower")
else:
    # Find the lowest price among valid mowers
    min_price = min(x[1] for x in ms)
    for name, price in ms:
        if price == min_price:
            print(name)
