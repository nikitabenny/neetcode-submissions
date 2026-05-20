class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;

        int lowest = 5001;

        //while we are rotated
        while(nums[l] > nums[r]){
            int mid = (l+r)/2;

            if(nums[mid] < lowest){
                lowest = nums[mid];
            }

            //mid is part of left sorted sequence
            if( nums[mid] >= nums[l]){
                l = mid + 1;
            }

            //mid is part of right sorted sequence
            else{
                r = mid - 1;
            }
        }

        if(nums[l] < lowest){
            lowest = nums[l];
        }

        return lowest;
    }
};
