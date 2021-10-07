from math import pow, fabs

x = float(input())
s = 0
g = 0.000001
i = 1
a1 = 1
a2 = 1
while fabs(pow(-1, i) * pow(x, i) / (i + 1) - pow(-1, i - 1) * pow(x, i - 1) / i) > g:
    s += pow(-1, i - 1) * pow(x, i - 1) / i
    i += 1

print('%.6f' % s)
