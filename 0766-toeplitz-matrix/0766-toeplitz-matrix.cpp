class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        
         for(int k=0; k<n; k++){
             int t=-1;
             for(int i=0, j=k; i<m && j<n; i++, j++){
                 if(t==-1){
                     t=matrix[i][j];
                 }else{
                     if(t!=matrix[i][j]){
                         return false;
                     }
                 }
             }
         }
        for(int k=1; k<m; k++){
            int t=-1;
            for(int i=k, j=0; i<m && j<n; i++, j++){
                if(t==-1){
                    t=matrix[i][j];
                }else{
                    if(t!=matrix[i][j]){
                        return false;
                    }
                }
            }
        }
        
        return true;
    }
};