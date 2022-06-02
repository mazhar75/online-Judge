t = int(input())

for _ in range(t):
    n = int(input())
    a = sorted(list(map(int, input().split())))
    res = a[0]
    for i in range(n - 1):
        res = max(res, a[i + 1] - a[i])
    print(res)