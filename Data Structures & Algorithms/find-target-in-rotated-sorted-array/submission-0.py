class Solution:
    def search(self, nums: List[int], target: int) -> int:
        if len(nums) == 1:
            if nums[0] == target:
                return 0
            else:
                return -1
        
        #1. Find the split
        l = 0
        r = len(nums) - 1

        while(abs(l - r) > 1):
            mid = (l+r) // 2
            if target == nums[mid]:
                return mid
            # if r < mid -> smallest is between mid and r
            if nums[r] < nums[mid]:
                l = mid

            else:
                r = mid

        min_val = min(nums[l], nums[r])
        max_val = max(nums[l], nums[r])

        if nums[l] < nums[r]:
            min_idx = l
            max_idx = r

        else:
            min_idx = r
            max_idx = l

        #find from start to mid
        l = 0
        r = max_idx

        while abs(l - r) > 1:
        
            mid = (l+r) // 2
            print(mid)

            if nums[mid] == target:
                return mid

            elif nums[mid] > target:
                r = mid - 1
                nums[mid] < target

            else:
                l = mid + 1
        
        if nums[l] == target:
            return l

        elif nums[r] == target:
            return r

            

        #from mid to start
        l = min_idx
        r = len(nums) - 1

        while abs(l - r) > 1:
            mid = (l+r) // 2

            if nums[mid] == target:
                return mid

            elif nums[mid] > target:
                r = mid - 1
                nums[mid] < target

            else:
                l = mid + 1

        if nums[l] == target:
            return l

        elif nums[r] == target:
            return r

        else:
            return -1

        


