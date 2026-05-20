class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int p1 = 0;
        int p2 = numbers.size() - 1;
        vector<int> result;
        result.reserve(2);
        result.resize(2);

        while(p2 > p1){
            int curr_sum = numbers[p1] + numbers[p2];
            if(curr_sum == target){
                result[0] = (p1+1);
                result[1] = (p2+1);

                return result;
            }

            else if (curr_sum > target){
                p2--;
            }

            else{
                p1++;
            }
        }
        return result;


    }
};