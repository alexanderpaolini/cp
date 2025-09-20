X, Y, S = input().split(" ")
S = int(S)

out = []

for i in range(2, 11):
  for j in range(2, 11):
    try:
      if int(X, i) + int(Y, j) == S:
        out.append((i, j))
    except:
      pass
      
out.sort()

print(out[0][0], out[0][1])