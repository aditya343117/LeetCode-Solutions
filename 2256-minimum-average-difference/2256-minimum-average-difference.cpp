class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n=nums.size();
        
        vector<long>left(n);
        vector<long>right(n);
        
        left[0]=nums[0];
        
        for(int i=1; i<nums.size(); i++){
            left[i]=left[i-1]+nums[i];
        }
        
        right[n-1]=nums[n-1];
        
        for(int i=n-2; i>=0; i--){
            right[i]=right[i+1]+nums[i];
        }
        
        long diff=INT_MAX;
        int ans=-1;
        
        for(int i=0; i<n; i++){
            
            if(i==n-1){
              long temp=(left[i]/(i+1));
              if(temp<diff){
                  diff=temp;
                  ans=i;
              }
    
            }else{ 
              long temp=abs((left[i]/(i+1))-(right[i+1]/(n-i-1)));
               if(temp<diff){
                  diff=temp;
                  ans=i;
              }  
            }
        }
        
        return ans;
        
    }
};








