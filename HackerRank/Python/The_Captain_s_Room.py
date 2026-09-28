from collections import Counter

k = int(input())
rooms = list(map(int, input().split()))

count = Counter(rooms)

for room, freq in count.items() :
    if freq == 1 :
        print(room)
        break
