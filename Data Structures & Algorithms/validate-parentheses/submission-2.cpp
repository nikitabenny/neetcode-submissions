class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2 == 1) {return false;}
        
        std::stack<char> open;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '{' || s[i] == '(' || s[i] == '['){
                open.push(s[i]);
            }

            else if(s[i] == '}'){
                if(open.empty()) { return false; }
                if(open.top() != '{'){
                    return false;
                }

                open.pop();

            }

            else if(s[i] == ')'){
                if(open.empty()) { return false; }

                if(open.top() != '('){
                    return false;
                }
                open.pop();
            }

            else if(s[i] == ']'){
                if(open.empty()) { return false; }

                if(open.top() != '['){
                    return false;
                }

                open.pop();
            }
           
        }

        if(!open.empty()){
            return false;
        }


        

        return true;
        

        
    }
};
