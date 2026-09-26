e = int(input())
english = set(map(int, input().split()))
f = int(input())
french = set(map(int, input().split()))

ans = english ^ french
print(len(ans))

