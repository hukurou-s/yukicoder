"""
def fib(n):

    a = 0
    b = 1
    for i in range(1, n):
        t = a + b
        a = b; b = t

    return a
"""

def fib(n, m):
    a = 0
    b = 1

    for i in range(2, n):
        t = a + b
        a = b
        b = t % m

    return b

n, m = [int(i) for i in input().split()]

f = fib(n, m)

print(f)


