class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int fProfit = 0;

        int wStart = 0;
        int wEnd = 1;

        while(wEnd < prices.size()){
            int cProfit = prices[wEnd] - prices[wStart];

            if(cProfit <= 0){
                wStart++;
                if(wStart == wEnd){
                    wEnd++;
                }
            }

            else{
                wEnd++;
                if(cProfit > fProfit){
                    fProfit = cProfit;
                }
                
            }
        }

        return fProfit;
    }
};
