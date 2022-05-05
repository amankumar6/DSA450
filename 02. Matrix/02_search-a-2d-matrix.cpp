class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size(), search = -1;
        
        for(int i = 0; i < row; i++){
            if(matrix[i][col - 1] > target){
                search = i;
                break;
            }
            else if(matrix[i][col - 1] == target) return true;
        }
        
        if(search >= 0)
            for(int i = 0; i < col; i++)
                if(matrix[search][i] == target) return true;
        
        return false;
    }
};