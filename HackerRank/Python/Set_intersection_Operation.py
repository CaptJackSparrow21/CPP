n = int(input())
english = set(map(int, input().split()))
m = int(input())
french = set(map(int, input().split()))

print(len(french.intersection(english)))