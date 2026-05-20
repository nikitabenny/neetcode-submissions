class Solution {
public:
    bool isPalindrome(string s) {
        string true_word;

        for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i])){
                true_word += tolower(s[i]);
            }
        }

        int p1 = 0;
        int p2 = true_word.length() - 1;

        while(p1 < p2){
            if(true_word[p1] != true_word[p2]){
                return false;
            }

            else{
                p1++;
                p2--;
            }
        }

        return true;
    }

    
};