# A Dynamic Programming based Python Program for 0-1 Knapsack problem
# Returns the maximum value that can be put in a knapsack of capacity reach
def knapSack(reach, weight, value, lengthofval):
	K = [[0 for x in range(reach+1)] for i in range(lengthofval+1)]

	# Build table K[][] in bottom up manner
	for i in range(lengthofval+1):
		for j in range(reach+1):
			if i==0 or j==0:
				K[i][j] = 0
			elif weight[i-1] <= j:
				K[i][j] = max(value[i-1] + K[i-1][j-weight[i-1]], K[i-1][j])
			else:
				K[i][j] = K[i-1][j]

	return K

# Driver program to test above function
value = [40, 20, 100,60]
weight = [1, 2, 3,4]
reach = 5
lengthofval = len(value)
x = knapSack(reach, weight, value, lengthofval)
print(x[0])
print(x[1])
print(x[2])
print(x[3])
print(x[4])


# This code is contributed by Bhavya Jain
