n = int(input())
s = set(map(int, input().split()))
k = int(input())

for _ in range(k):
    cmd = input().split()

    if cmd[0] == "pop":
        s.remove(min(s))

    elif cmd[0] == "remove":
        s.remove(int(cmd[1]))

    elif cmd[0] == "discard":
        s.discard(int(cmd[1]))

print(sum(s))