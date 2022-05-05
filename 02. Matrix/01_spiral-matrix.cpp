class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size(), col = matrix[0].size();
        int top = 0, right = col - 1, bottom = row - 1, left = 0, dir = 0;
        while(top <= bottom && left <= right){
            if(dir == 0){
                for(int i = left; i <= right; i++) ans.push_back(matrix[top][i]);
                top++;
            }
            if(dir == 1){
                for(int i = top; i <= bottom; i++) ans.push_back(matrix[i][right]);
                right--;
            }
            if(dir == 2){
                for(int i = right; i >= left; i--) ans.push_back(matrix[bottom][i]);
                bottom--;
            }
            if(dir == 3){
                for(int i = bottom; i >= top; i--) ans.push_back(matrix[i][left]);
                left++;
            }   
            dir = (dir + 1) % 4;
        }
        return ans;
    }
};