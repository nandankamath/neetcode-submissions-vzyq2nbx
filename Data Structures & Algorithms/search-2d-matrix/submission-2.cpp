class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = 0;
        int col = 0;

        while(true){
            if(matrix[row][col] == target){
                return true;
            }else if(row < matrix.size()-1 && matrix[row + 1][col] <= target){
                row++;
            }else if(col < matrix[row].size()-1 && matrix[row][col+1] <= target){
                col++;
            }else{
                return false;
            }
        }
    }
};
