def sort(nums):
    for i in range (1,len(nums)):
        key = nums[i]
        j = i-1
        while j >= 0 and key < nums[j]:
            nums[j+1] = nums[j]
            j = j-1
        nums[j+1] = key
    return nums


nums = []
i = int(input())
while i > 0:
    nums.append(i)
    i = int(input())
print(sort(nums))