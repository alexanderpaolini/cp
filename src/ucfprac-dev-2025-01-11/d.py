import math

n, inst = map(int, input().split())
print(n)

balls = [ ['X', 0, 0] ]

for _ in range(inst):
    s, l, r = input().split()
    l = int(l)
    r = int(r)
    balls.append([s, l, r])

# Loaded

def find_next(dir, times):
    if times % 2 == 0:
        return dir
    
    if dir == 'L':
        return 'R'
    if dir == 'R':
        return 'L'

def change(pos, n):
    if (pos == 0 or n == 0):
        return
    
    cur_dir = balls[pos][0]
    balls[pos][0] = find_next(cur_dir, n)
    
    if cur_dir == 'L':
        change(balls[pos][1], math.ceil(n / 2))
        change(balls[pos][2], math.floor(n / 2))
    else:
        change(balls[pos][1], math.floor(n / 2))
        change(balls[pos][2], math.ceil(n / 2))

change(1, n)

for i in range(1, inst + 1):
    print(balls[i][0], end="")

print()
