from itertools import combinations_with_replacement
s, k = input().split()
s = sorted(s)

for combination in combinations_with_replacement(s, int(k)) :
    print("".join(combination))