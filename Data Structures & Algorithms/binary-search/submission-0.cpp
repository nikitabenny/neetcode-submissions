class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while(left <= right){
            if(target > nums[(left+right)/2]){
                left = (left+right)/2 + 1;
            }

            else if(target < nums[(left+right)/2]){
                right = (left+right)/2 - 1;
            }

            else{
                return (left+right)/2;
            }
        }

        return -1;
    }
};