n = int(input())

for i in range(1, 10):
    for j in range(0, 10):
        for k in range(0, 10):
            if i + j + k == n:
                print(i * 100 + j * 10 + k)
