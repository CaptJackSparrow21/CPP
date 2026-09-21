from itertools import combinations

n = int(input())
arr = input().split()
k = int(input())

comb = list(combinations(arr, k))
cnt = sum('a' in x for x in comb)

print(cnt / len(comb))
#print(f"{cnt  / len(comb):.4f}")