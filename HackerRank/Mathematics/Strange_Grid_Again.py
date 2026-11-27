
r, c = map(int, input().split())

ans = 10 * ((r - 1) // 2) + 2 * (c - 1) + (r + 1) % 2

print(ans)
