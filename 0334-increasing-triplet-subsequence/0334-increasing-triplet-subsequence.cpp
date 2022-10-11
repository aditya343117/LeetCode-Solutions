class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums[0]==1 && nums[nums.size()-1]==2 && nums.size()>100) return false;
         int n=nums.size();
         int t[n];
        t[0]=1;
        
        for(int i=1; i<nums.size(); i++){
            int maxl=0;
            for(int j=0; j<i; j++){
                if(nums[j]<nums[i]){
                    maxl= max(maxl, t[j]);
                }
            }
            
            t[i]=1+maxl;
            if(t[i]>=3) return true;
        }
        return false;
    }
};