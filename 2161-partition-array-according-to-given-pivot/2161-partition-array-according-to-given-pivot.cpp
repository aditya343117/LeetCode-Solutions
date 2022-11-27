class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int>pre;
        vector<int>post;
        int count=0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<pivot){
                pre.push_back(nums[i]);
            }else if(nums[i]>pivot){
                post.push_back(nums[i]);
            }else if(nums[i]==pivot) count++;
        }
        
        while(count--){
            pre.push_back(pivot);
        }
        
        for(auto it: post) pre.push_back(it);
        
        return pre;
    }
};