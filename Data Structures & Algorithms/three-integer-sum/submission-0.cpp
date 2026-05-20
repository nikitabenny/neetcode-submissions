class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 2; i++){
            if(i > 0) {
                if(nums[i] == nums[i-1]){
                    continue;
                }
            }

            vector<int>curr_result;
            int fixed = nums[i];
            int p1 = i+1;
            int p2 = nums.size() - 1;
            curr_result.push_back(fixed);

            
            while(p2 > p1){
                if(nums[p1] + nums[p2] == -1 * fixed){
                    curr_result.push_back(nums[p1]);
                    curr_result.push_back(nums[p2]);
                    result.push_back(curr_result);
                    curr_result.erase(curr_result.begin() + 1, curr_result.end());
                    p1++;
                    p2--;

                    while(p1 < p2 && nums[p1] == nums[p1-1]){
                        p1++;
                    } 

                    while(p1 < p2 && nums[p2] == nums[p2+1]){
                        p2--;
                    }              
                }

                else if(nums[p1] + nums[p2] > -1 * fixed){
                    p2--;
                }

                else if(nums[p1] + nums[p2] < -1 * fixed){
                    p1++;
                }
            }
        }

        return result;

    }
};