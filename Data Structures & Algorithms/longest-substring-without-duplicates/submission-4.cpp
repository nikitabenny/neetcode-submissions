class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int max = 0;
        unordered_map<char,int> counts;

        while(r < s.length()){
            counts[s[r]]++;

            while (counts[s[r]] > 1){
                counts[s[l]]--;
                l++;
            }

            if(r-l+1 > max){
                max = r-l+1;
            }
            r++;
        }

        return max;

        
    }
};