class Solution(object):
    def removeElement(self, nums, val):
        n=len(nums)
        index=0
        for i in range(n):
            if val!=nums[i] :
                nums[index]=nums[i]
                index +=1
        return index
            

