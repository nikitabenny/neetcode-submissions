#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int, int> check;

        unordered_map<int,int> map;

        for(int n = 0; n < nums.size(); n++){
            map[nums[n]]++;
        }

        for(int n = 0; n < nums.size(); n++){
            if(map[nums[n]] > 1){
                return true;
            }
        }


        return false;

        

        

    }
};