class Solution {
public:
    int trap(vector<int>& height) {
        
         int n=height.size();
    vector<int>lmax(n);
    vector<int>rmax(n);
    
    lmax[0]=height[0];
    
    for(int i=1; i<height.size(); i++){
        lmax[i]=max(lmax[i-1], height[i]);
    }
   
    
    rmax[n-1]=height[n-1];
    
    for(int i=height.size()-2; i>=0; i--){
        rmax[i]=max(rmax[i+1], height[i]);
    }
    
   
    int count=0;
    
    for(int i=1; i<height.size()-1; i++){
        int temp=min(lmax[i], rmax[i]);
        count+= temp-height[i];
    }
    
    return count;
        
        
        
    }
}; 