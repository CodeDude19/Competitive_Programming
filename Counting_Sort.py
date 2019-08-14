import random
import time

list = []
for i in range(10000000):
    list.append(random.randrange(0,10000000))
start = time.time()
n = max(list)
c_arr = [0 for i in range(n+1)]
for x in list:
    c_arr[x] +=1
# sorted array :
end = time.time()
print("\n\nTime Taken is : ",end-start)
start = time.time()
list = sorted(list)
end = time.time()
print("\n\nTime Taken is : ",end-start)
	