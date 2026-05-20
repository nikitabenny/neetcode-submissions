class Solution {
public:
    int maxArea(vector<int>& height) {
        int p1 = 0;
        int p2 = height.size() - 1;
        int maxHeight = 0;

        while(p2 > p1){
            int currHeight;
            currHeight = (p2 - p1) * min(height[p1], height[p2]);

            if(currHeight > maxHeight){
                maxHeight = currHeight;
            }

            if(height[p2] > height[p1]){
                p1++;
            }

            else if(height[p2] < height[p1]){
                p2--;
            }

            else{
                p1++;
            }
        }

        return maxHeight;

        
    }
};