def minimum(nums):
    d = len(nums)
    t = nums[0]
    for i in range (1,d):
        if(nums[i] > t):
            t = nums[i]
    return t

nums = []
i = int(input())
while i > 0:
    nums.append(i)
    i = int(input())
print(minimum(nums))