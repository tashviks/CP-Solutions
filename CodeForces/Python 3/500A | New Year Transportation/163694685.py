p=lambda:map(int,input().split())
N,T=p();a=*p(),;n=1
while n<T:n+=a[n-1]
print("YNEOS"[n>T::2])