class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        
        int maxr=matrix.size();
        int maxc=matrix[0].size();
        
        int minr=0;
        int minc=0;
        
        int tc=maxr*maxc;
        int count=0;
        while(count<tc){
            
            for(int i=minr,j=minc; j<maxc && count<tc; j++){
                ans.push_back(matrix[i][j]); 
                count++;
            }
            minr++;
            
            for(int i=minr, j=maxc-1; i<maxr && count<tc; i++){
                ans.push_back(matrix[i][j]);
                count++;
            }
            maxc--;
            
            for(int i=maxr-1, j=maxc-1; j>=minc && count<tc; j--){
                ans.push_back(matrix[i][j]);
                count++;
            }
            maxr--;
            
            for(int i=maxr-1,j=minc; i>=minr && count<tc; i--){
                ans.push_back(matrix[i][j]);
                count++;
            }
            minc++;
        }
        return ans;
    }
};