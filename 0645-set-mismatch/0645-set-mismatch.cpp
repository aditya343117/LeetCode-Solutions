class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        
        unordered_map<int, int>mp;
        
        for(auto it: nums){
           mp[it]++;     
        }
        int sum=0;
        for(auto it: mp){
            sum+=it.first;
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        
        int temp=n*(n+1)/2;
        ans.push_back(temp-sum);
        
        return ans;
        
    }
};