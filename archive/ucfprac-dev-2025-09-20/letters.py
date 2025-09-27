# solved
import collections;

i = 0
while True:
  i += 1
  x = input()
  y = input()
  
  if x == "END":
    break
  
  c1 = collections.Counter(x)
  c2 = collections.Counter(y)
  
  if len(c1.items()) != len(c1.items()):
    print(f"Case {i}: different")
    break

  flag = False
  for a, b in c1.items():
    if flag:
      break
    if c2.get(a) != b:
      flag = True
      
  if flag:
    print(f"Case {i}: different")
  else:
    print(f"Case {i}: same")
