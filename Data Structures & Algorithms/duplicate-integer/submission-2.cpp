#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int, int> check;

        for(int i = 0; i < nums.size(); ++i){
            check[nums[i]] = 0;
        }

        for(int i = 0; i < nums.size(); ++i){
            check[nums[i]] += 1;

            if(check[nums[i]] > 1){
                return true;
            }
        }


        return false;

        

        

    }
};