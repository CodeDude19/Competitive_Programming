def main():
    t = int(input())
    for i in range(t):
        x = list(input().split(" "))
        n,d = x[0],x[1]
        min = int(n)
        digits = []
        for c in n:
            digits.append(c)
        for j in range(len(digits)):
            k = 0
            while k< (len(digits) - 1 - j) and (digits[k+1]>=digits[k]):
                k +=1
            digits.remove(digits[k])
            digits.append(d)
            newString = ""
            for c in digits:
                newString +=c
            newN = int(newString)
            if int(newN)<min:
                min = newN
        print(min)

main()
