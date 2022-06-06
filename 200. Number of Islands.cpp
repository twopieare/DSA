class Solution {
public:
    int row, column;
    
    void dfs(vector<vector<char>>& grid, int r, int c){
        if(r<0 || c<0 || r>=row || c>=column || grid[r][c]=='0') return;
        
        if(grid[r][c] == '1')
            grid[r][c] = '0';
        
        dfs(grid, r+1, c);
        dfs(grid, r-1, c);
        dfs(grid, r, c+1);
        dfs(grid, r, c-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        row = grid.size(), column = grid[0].size();
        
        int islands = 0;
        
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i, j);
                    islands++;
                }
            }
        }
        
        return islands;
    }
};
