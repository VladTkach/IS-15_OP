import math

a = float(input())
b = float(input())
c = float(input())


p = (a + b + c) / 2
S = math.sqrt(p * (p - a) * (p - b) * (p - c))
R = a * b * c / 4 / S
r = 2 * S / (a + b + c)
bi1 = math.sqrt(a * b * (a + b + c) * (a + b - c)) / (a + b)
bi2 = math.sqrt(b * c * (b + c + a) * (b + c - a)) / (b + c)
bi3 = math.sqrt(a * c * (a + c + b) * (a + c - b)) / (a + c)

print(str(bi1) + "\n" + str(bi2) + "\n" + str(bi3) + "\n" + str(r) + "\n" + str(R))
