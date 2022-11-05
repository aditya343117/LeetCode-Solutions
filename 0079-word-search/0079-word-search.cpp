class Solution {
public:
    bool dfs(int i, int j, int m, int n, vector<vector<char>>&board, string word, int k){
         if(k==word.size()) return true;
         if(i<0 || i>=m || j<0 || j>=n || board[i][j]!=word[k]){
             return false;
         }
        
        char t=board[i][j];
        board[i][j]='$';
        
        bool a= dfs(i+1, j, m ,n, board, word, k+1);
        bool b= dfs(i-1, j, m, n, board, word, k+1);
        bool c= dfs(i, j+1, m, n, board, word, k+1);
        bool d= dfs(i, j-1, m, n, board, word, k+1);
        
        board[i][j]=t;
        
        return a||b||c||d;
            
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]==word[0]){
                    if(dfs(i, j, m, n, board, word, 0)){
                        return true;
                     }
                }
            }
        }
        return false;
    }
};