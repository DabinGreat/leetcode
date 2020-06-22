# 0001

# 给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
#
# 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。


# 1
class Solution:

    def twoSum(self, nums, target):

        for i in range(len(nums)):
            for j in range(len(nums)-i):
                if (nums[i]+nums[j+i] == target) & (i!=j+i):
                    return [i, j+i]
                j+=1

# 2
class Solution:
    def twoSum(self, nums, target):
        dictmap = {}
        for ind,num in enumerate(nums):
            dictmap[num] = ind
        for i,num in enumerate(nums):
            j = dictmap.get(target - num)
            if j is not None and i!=j:
                return [i,j]

