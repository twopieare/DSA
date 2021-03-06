class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //changing boundary and moving only to half
        int n = matrix.size();    
        for(int row=0; row<n/2; row++) {
            for(int i=row; i<n-row-1; i++) {
                int t = matrix[row][i];
                matrix[row][i] = matrix[n-i-1][row];
                matrix[n-i-1][row] = matrix[n-row-1][n-i-1];
                matrix[n-row-1][n-i-1] = matrix[i][n-row-1];
                matrix[i][n-row-1] = t;
            }
        }     
    }
};
