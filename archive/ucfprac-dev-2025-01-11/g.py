n = int(input())

locs = []
for _ in range(n):
    locs.append(list(map(int, input().split())))

max_d = int(input())

def dist(c1, c2):
    return abs(c1[0] - c2[0]) + abs(c1[1] - c2[1])

def create_acceptable(pos):
    acc = []
    for i in range(max(pos[0] - max_d, 0), pos[0] + max_d + 1):
        for j in range(max(pos[1] - max_d, 0), pos[1] + max_d + 1):
            # Add all acceptable points into acceptable
            if dist([i, j], locs[0]) <= max_d:
                acc.append([i, j])
    return acc

acceptable = create_acceptable(locs[0])

# print(acceptable)

for l in locs[1::]:
    temp = []
    for la in acceptable:
        if dist(l, la) <= max_d:
            # print(l, la, dist(l, la))
            temp.append(la)
    acceptable = temp
    
def total_dist(p):
    d_sum = 0
    for l in locs:
        d_sum += dist(l, p)
    return d_sum

# print(acceptable)
if len(acceptable) == 0:
    print("impossible")
else:
    print(min(map(total_dist, acceptable)))