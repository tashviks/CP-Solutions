#PYTHON PRACTICE (NEWLY ACQUIRED SKILL) 
for tc in range(int(input())):
    n, x = map(int, input().split())
    a = [int(x) for x in input().split()]
 
    ans = 0
    l = r = a[0]
    for i in range(1, n):
        l = min(l, a[i])
        r = max(r, a[i])
        if r - l > 2 * x:
            l = r = a[i]
            ans += 1
 
    print(ans)
 
    #the code is so fucking short