def median(nums):
    n = len(nums)
    for i in range (1,n):
        key = nums[i]
        j = i-1
        while j >= 0 and key < nums[j]:
            nums[j+1] = nums[j]
            j = j-1
        nums[j+1] = key
    if(n %2 != 0):
        m = int((n+1)/2 - 1)
        return nums[m]  
    else:
        m1 = int(n/2 - 1)
        m2 = int(n/2)
        return (nums[m1]+nums[m2])/2
        
nums = []
i = int(input())
while i > 0:
    nums.append(i)
    i = int(input())
print(median(nums))    