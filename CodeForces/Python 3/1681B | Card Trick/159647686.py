#tried something new this time , to solve it with a different language
#and a different mindset
 
for _ in range(int(input())):
    
  n = int(input())
  
  a = list(map(int, input().split()))
  
  m = int(input())
  
  print(a[sum(map(int, input().split())) % n])