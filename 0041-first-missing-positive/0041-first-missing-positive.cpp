class Solution {
public:
    int firstMissingPositive(vector<int>& nums){
        
       set<int>st;
        for(auto it: nums){
            st.insert(it);
        }
        
        for(int i=1; i<=nums.size()+1; i++){
            if(st.find(i)==st.end()){
                return i;
            }
        }
        return -1;
    }
};