class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        //row
        for(int i = 0; i < board.size(); i++){
            unordered_map<int,bool> row;
            for(int j = 0; j < board[i].size(); j++){
                if(board[i][j] == '.'){
                    continue;
                }
                else if(!row.contains(board[i][j])){
                    row[board[i][j]] = true;
                }else{
                    return false;
                }
            }
            
        }
        //col
        for(int i = 0; i < board[i].size(); i++){
            unordered_map<int,bool> row;
            for(int j = 0; j < board.size(); j++){
                if(board[j][i] == '.'){
                    continue;
                }else if(!row.contains(board[j][i])){
                    row[board[j][i]] = true;
                }else{
                    return false;
                }
            }
            
        }

       
        

        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxCol = 0; boxCol < 9; boxCol += 3) {
                
                unordered_set<char> box_set; // Reset set for this specific 3x3 box

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char current = board[boxRow + i][boxCol + j];

                        if (current == '.') {
                            continue;
                        }

                        if (box_set.contains(current)) {
                            return false;
                        }
                        box_set.insert(current);
                    }
                }

            }
        }

        return true;
    }
};
