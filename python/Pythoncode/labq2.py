def nprime(nums):
    x = len(nums)
    cnt = 0
    
    for i in range (0,x):
        if(nums[i] == 2):
            cnt = cnt+1
    for i in range (0,x):
        for j in range (2,nums[i]):
            if(nums[i] % j == 0):
                
                break
            else :
                cnt = cnt+1
    if cnt >= 1:
        return True
    return False


nums = []
i = int(input())
while i > 0:
    nums.append(i)
    i = int(input())
print(nprime(nums))