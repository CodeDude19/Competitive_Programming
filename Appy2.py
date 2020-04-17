#  APPY2
def main():
    t = int(input())
    for i in range(t):
        n,a,b,k = map(int,input().split())
        n = n
        res = 0
        if a==1:
            res = n//a
            res = res - (n//(a*b))
        elif b ==1:
            res = n//b
            res = res - (n//(a*b))
        elif a == b:
            pass
        elif a!= b:
            if a%b == 0 or b%a == 0:
                if a%b == 0:
                    res = n//b - n//a
                if b%a == 0:
                    res = n//a - n//b
            else:
                x  = (n//a) + (n//b)
                y = (n//(a*b))*2
                res = x-y
        if res >= k:
            print("Win",res)
        else:
            print("Lose",res)
main()
