def recursive(s,start,end,arr1):
    if start >= end:
        return
    else:
        arr1.append(s[end-1])
        recursive(s,start,end-1,arr1)
        return arr1

def main():
    str = "aabav"
    arr = []
    print()
    arr2 = recursive(str,0,len(str),arr)
    if str == "".join(arr2):
        print("Palindrome")
    else:
        print("Not Palindrome")
main()
