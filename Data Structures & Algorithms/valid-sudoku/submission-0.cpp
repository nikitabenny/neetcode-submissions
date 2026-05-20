class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char,int>> cols(9);
        vector<unordered_map<char,int>> rows(9);
        vector<unordered_map<char,int>> box(9);

        //char[row][col]
        //cols
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[i].size(); j++){
            
                int num = ((9 * i) + j);
                const char curr_char = board[num/9][num % 9];

                if(isdigit(curr_char)){
                    rows[num/9][curr_char]++;
                    cols[num%9][curr_char]++;

                    if(rows[num/9][curr_char] > 1){
                        return false;
                    }

                    if(cols[num%9][curr_char]  > 1){
                        return false;
                    }


                    int box_row = (num/9)/3;
                    int box_col = (num%9)/3;
                    int box_id;

                    if(box_col == 0){
                        if(box_row == 0){
                            box_id = 0;
                        }
                        else if(box_row == 1){
                            box_id = 1;
                        }

                        else if (box_row == 2){
                            box_id = 2;
                        }
                    }

                    if(box_col == 1){
                        if(box_row == 0){
                            box_id = 3;
                        }
                        else if(box_row == 1){
                            box_id = 4;
                        }

                        else if (box_row== 2){
                            box_id = 5;
                        }
                    }

                    if(box_col == 2){
                        if(box_row == 0){
                            box_id = 6;
                        }
                        else if(box_row == 1){
                            box_id = 7;
                        }

                        else if (box_row == 2){
                            box_id = 8;
                        }
                    }
                    

                    box[box_id][curr_char]++;
    
                    if(box[box_id][curr_char] > 1){
                        return false;
                    }
                }

                
            }
        
            
            
        }
        return true;
    }
};
