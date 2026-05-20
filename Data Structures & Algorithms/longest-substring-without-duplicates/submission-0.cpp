class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.empty()){
            return 0;
        }

        if (s.length() == 1){
            return 1;
        }

        int lMax = 1;

        unordered_map<char,int> seen;

        int wStart = 0;
        int wEnd = 0;


        while(wEnd < s.length()){

            seen[s[wEnd]]++;

            while(seen[s[wEnd]] > 1){
                seen[s[wStart]]--;
                wStart++;
            }

            int currLength = wEnd - wStart + 1;

            if(currLength > lMax){
                lMax = currLength;
            }

            wEnd++;
            

        }

        return lMax;

        
    }
};