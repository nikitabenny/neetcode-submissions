class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.length() > s2.length()){
            return false;
        }

     
        /*
        - hashmap
        - sum of char values (doesnt always work)
        - sort (too much time)
        */

        if(s1 == s2) {return true;}
        int l = 0;
        int r = s1.length()-1;
        int result = 0;

        unordered_map<char,int> curr2;
        unordered_map<char,int> target;

        //optimize later for memory?
        for(int i = 0; i < s1.length(); i++){
            target[s1[i]]++;
        }

        for(int i = 0; i < s1.length(); i++){
            curr2[s2[i]]++;
        }

        if(target == curr2){ return true;}
        r++;


        while(r < s2.size()){
            curr2[s2[r]]++;

            curr2[s2[l]]--;

            if(curr2[s2[l]] == 0){
                curr2.erase(s2[l]);
            }

            l++;

            if(curr2 == target){
                return true;
            }

            r++;
            

        }
        return false;
    }
};