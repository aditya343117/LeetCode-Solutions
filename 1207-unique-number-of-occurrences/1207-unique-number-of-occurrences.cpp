class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int, int>mp;
        
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        
        set<int>st;
        
        for(auto it: mp){
            st.insert(it.second);
        }
        
        if(st.size()==mp.size()){
            return true;
        }else{
            return false;
        }
    }
};