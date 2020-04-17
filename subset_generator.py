def main():
    arr = ['a','b','c']
    subset_arr = []
    for i in range(1<<len(arr)):
        temp_subset = []
        for j in range(len(arr)):
            k = i & (1<<j)
            # print("\n{} & ((1<<{}) = {} ) = {}".format(i,j,1<<j,k))
            if(k):
                # print("\n",arr[j],end=' ')
                temp_subset.append(arr[j])
        if (len(temp_subset)):
            subset_arr.append(temp_subset)
        # print('\n')
    print("Subset of {} is :".format(arr))
    for x in subset_arr:
        print(x)
main()
