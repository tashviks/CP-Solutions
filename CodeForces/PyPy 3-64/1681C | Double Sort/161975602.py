for _ in range(int(input())):
 n = int(input())
 a = list(map(int, input().split()))
 b = list(map(int, input().split()))
 tmp = [i for i in range(n)]
 tmp.sort(key=lambda i: [a[i], b[i]])
 for i in range(n - 1):
  if a[tmp[i]] > a[tmp[i + 1]] or b[tmp[i]] > b[tmp[i + 1]]:
   print("-1")
   break
 else:
  ans = []
  for i in range(n - 1):
   for j in range(n - 1):
    if a[j] > a[j + 1] or b[j] > b[j + 1]:
     a[j], a[j + 1] = a[j + 1], a[j]
     b[j], b[j + 1] = b[j + 1], b[j]
     ans.append([j + 1, j + 2])
  print(len(ans))
  for it in ans:
   print(*it)