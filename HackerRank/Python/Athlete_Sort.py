n, m = map(int, input().split())

arr = [list(map(int, input().split())) for _ in range(n)]

k = int(input())

arr.sort(key=lambda row : row[k])

for row in arr :
    print(*row)