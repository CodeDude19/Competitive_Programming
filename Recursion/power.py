def power(k,n,r):
    if n>0:
        return power(k*r,n-1,r)
    return k

    
def main():
    k = 2
    n = 10
    x = power(k,n-1,k)
    print(x)
main()
