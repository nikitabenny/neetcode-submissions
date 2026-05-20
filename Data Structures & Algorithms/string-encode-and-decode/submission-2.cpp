class Solution {
public:

    string encode(vector<string>& strs) {
        string result;
        for(int i = 0; i < strs.size(); i++){
            result += "#";
            result += to_string(strs[i].length());
            result += "#";
            for(int j = 0; j < strs[i].length(); j++){
                result += (strs[i][j]);
            }

            
        }

        return result;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> result;
        string word;
        while(i < s.length()){
            int j = 0;
            string get_num;
            int tag_count = 0;

            if((s[i]) == '#' && tag_count == 0){
                tag_count++;
                i++;
                while(isdigit(s[i])){
                    get_num += s[i];
                    i++;
                }
            }
            int curr_length;

            if( (s[i]) == '#' && tag_count == 1){
                curr_length = stoi(get_num);
                i++;
            }
            
            while(j < curr_length){
                word += s[i+j];
                j++;
            }

            result.push_back(word);
            word = "";
            i = i + j;
            j = 0;
        }
        
        return result;
    
    }
};
