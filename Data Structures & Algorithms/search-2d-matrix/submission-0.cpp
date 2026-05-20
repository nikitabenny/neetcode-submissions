class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int rows = matrix.size();  // 1
        int cols = matrix[0].size(); // 2

        int r = rows*cols - 1; //1

        

        while(l <= r){
            if(matrix[((r+l)/2) / cols][((r+l)/2) % cols] < target){
                l = (r+l)/2 + 1;

            }

            else if(matrix[((r+l)/2) / cols][((r+l)/2) % cols] > target){
                r = (r+l)/2 - 1;
            }

            else{
                return true;
            }

        }

        return false;
    }
};