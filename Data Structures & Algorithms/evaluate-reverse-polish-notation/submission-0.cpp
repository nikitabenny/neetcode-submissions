class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stacky;
        for(int i = 0; i < tokens.size(); i++){
            if( tokens[i].length() == 1 && !isdigit(tokens[i][0]) ){
                int d1 = (stacky.top());
                stacky.pop();
                int d2 = (stacky.top());
                stacky.pop();
                
                if(tokens[i][0] == '+'){
                    stacky.push(d2 + d1);
                }

                else if(tokens[i][0] == '/'){
                    stacky.push(d2 / d1);
                }
                else if(tokens[i][0] == '-'){
                    stacky.push(d2 - d1);
                }
                else if(tokens[i][0] == '*'){
                    stacky.push(d2 * d1);
                }
            }

            else{
                stacky.push(stoi(tokens[i]));
            }
            

            
        }

        return stacky.top();
    }
};