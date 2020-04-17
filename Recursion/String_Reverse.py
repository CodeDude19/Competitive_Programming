def recursive(s,start,end,arr):
    if start >= end:
        return
    else:
        arr.append(s[end-1])
        recursive(s,start,end-1,arr)
        return arr

def main():
    arr = []
    arr = recursive("String",0,len("String"),arr)
    print("arr = ",arr)
main()
