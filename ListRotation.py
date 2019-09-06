# List Rotations:
def rotatelist(l,k):
    list = l.copy()
    if k>0:
        for i in range(k):
            temp = list[0]
            list = list[1:]
            list.append(temp)
        return list
    else:
        return list
        
print(rotatelist([1,2,3,4,5],12))