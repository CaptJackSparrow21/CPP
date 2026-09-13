#from collections import OrderedDict
n = int(input())
freq = {}
for _ in range(n) :
    word = input().strip()
    freq[word] = freq.get(word, 0) + 1

print(len(freq))
print(*freq.values())