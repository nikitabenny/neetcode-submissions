class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = -1;
        

        for(int i = 0; i < piles.size(); i++){
            if(piles[i] > r){
                r = piles[i];
            }
        }

        while(l <= r){
            int mid = (l+r)/2;
            long long hours = 0;

            for(int i = 0; i < piles.size(); i++){
                hours += ceil((piles[i] * 1.0)/mid);
            }

            if(hours > h){ //speed is too slow
                l = mid + 1;
            }

            else if(hours <= h){ //our speed is valid, can we slow it down?
                r = mid - 1;
            }
        }

        return r+1;
    }
};
