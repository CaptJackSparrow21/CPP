from collections import Counter
s = input()
count = Counter(s)

for ch, freq in sorted(count.items(), key = lambda x : (-x[1], x[0])) [:3] :
    print(ch, freq)
