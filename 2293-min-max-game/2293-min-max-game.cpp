class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n=nums.size()/2;
        
        while(n-- && nums.size()>1){
            bool flag=true;
            for(int i=0; i<nums.size() && i+1<nums.size(); i++){
                
                if(flag==true){
                    int a=min(nums[i], nums[i+1]);
                    nums[i]=a;
                    nums.erase(nums.begin()+i+1);
                    flag=false;
                }else{
                    int b=max(nums[i], nums[i+1]);
                    nums[i]=b;
                    nums.erase(nums.begin()+i+1);
                    flag=true;
                }
            }
            
            for(auto it: nums) cout<<it<<" ";
            cout<<endl;
            
        }
        
        return nums[0];
    }
}; 