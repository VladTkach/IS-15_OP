
m = int(input())
n = input()

s = 0
for i in range(1, m+1):
    s += int(n[len(n) - i])
    print(int(n[len(n) - i]))

print(s)
