import math

l, w, h = map(int, input().split())
x, y, theta = map(int, input().split())

theta_rad = math.radians(theta)
fx = math.cos(theta_rad) * h + x
fy = math.sin(theta_rad) * h + y

if fx < 0 or fy < 0 or fx > w or fy > l:
    print("NO")
else:
    print("YES")