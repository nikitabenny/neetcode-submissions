#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> annies;
        unordered_map <char, int> anniet;

        if(s.length() == t.length()){

            for(int i =0; i < s.length(); i++){
                annies[s.at(i)]++;
                anniet[t.at(i)]++;
            }


            for(int i = 0; i < s.length(); i++){
                if(annies[s[i]] != anniet[s[i]]){
                    return false;
                }

            }


            return true;

            

        }

        return false;
        

    }
};