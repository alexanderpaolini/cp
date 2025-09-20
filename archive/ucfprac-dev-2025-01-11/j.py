n = int(input())

d1 = {}
d2 = {}

for _ in range(n):
    d = input()
    d1[d] = d1.get(d, 0) + 1
for _ in range(n):
    d = input()
    d2[d] = d2.get(d, 0) + 1

cnt = 0
for k in d1.keys():
    cnt += min(d1.get(k, 0), d2.get(k, 0))

print(cnt)