from collections import Counter

word = input()
wc = Counter(word)

n = int(input())

def check(w):
    if len(w) < 4:
        return False
    
    for c in w:
        if wc.get(c, 0) == 0:
            return False
    
    if word[0] not in w:
        return False
    
    return True 

for _ in range(n):
    w = input()
    if check(w):
        print(w)