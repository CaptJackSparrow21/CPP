def findPoint(px, py, qx, qy) :
    rx = 2 * qx - px
    ry = 2 * qy - py

    return [rx, ry]

n = int(input())
for _ in range(n) :
    px, py, qx, qy = map(int, input().split())

    result = findPoint(px, py, qx, qy)

    print(*result)