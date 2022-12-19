def mode(nums):
    n = len(nums)
    for i in range (1,n):
        key = nums[i]
        j = i-1
        while j >= 0 and key < nums[j]:
            nums[j+1] = nums[j]
            j = j-1
        nums[j+1] = key
    i = 0
    ans = 0
    while i < n :
        p = 1
        while ( i+ 1 < n and nums[i] == nums[i+1]):
            p += 1
            i += 1
        if p > ans:
            ans = p 
            e = nums[i]
        i=i+1
    return e   

nums = []
i = int(input())
while i > 0:
    nums.append(i)
    i = int(input())
print(mode(nums))        