class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans;
        
        vector<vector<int>>v(n, vector<int>(n));
        
        int maxr=n;
        int maxc=n;
        
        int minr=0;
        int minc=0;
        
        int tc=n*n;
        int count=0;
        int number=1;
        
        while(count<tc){
            
             for(int i=minr, j=minc; j<maxc && count<tc; j++){
                 v[i][j]=number++;
                 count++;
             }
            minr++;
            
            for(int i=minr, j=maxc-1; i<maxr && count<tc; i++){
                v[i][j]=number++;
                count++;
            }
            maxc--;
            
            for(int i=maxr-1, j=maxc-1; j>=minc && count<tc; j--){
                v[i][j]=number++;
                count++;
            }
            maxr--;
             
            for(int i=maxr-1, j=minc; i>=minr && count<tc; i--){
                v[i][j]=number++;
                count++;
            }
            minc++;
            
        }
        
        for(int i=0; i<n; i++){
             vector<int>t;
            for(int j=0; j<n; j++){
                t.push_back(v[i][j]);
            }
            ans.push_back(t);
        }
        return ans;
    }
};