n = int(input())
arr = list(map(int, input().split()))
print(all(x > 0 for x in arr) and any(str(x) == str(x)[::-1] for x in arr))