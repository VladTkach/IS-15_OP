import math
from math import pow, cos, log, fabs


def F1(x):
    return pow(math.e, -pow(x, 2))


def F2(x):
    return 2 / x * cos(x / 2)


def F3(x):
    return log(1 + pow(x, 2))


def integral(a, b, F, g):
    n = 2
    h = (b - a)
    a2 = h * F((a + h))
    a1 = 0
    while (fabs(a2 - a1) > g):
        a1 = a2
        a2 = 0
        h = (b - a) / n
        for i in range(1, n + 1):
            a2 += F(a + i * h)
        a2 *= h
        n += 1
    return a2


e = float(input())
a = 0.818
b = 1.403
c = 3.141

res = integral(a, b, F3, e) + integral(b, c, F2, e) - integral(a, c, F1, e)
print(res)
