class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int>mp;
        
        for(auto it: s){
            mp[it]++;
        }
        
        priority_queue<pair<int, char>>pq;
        
        for(auto it: mp){
            pq.push({it.second, it.first});
        }
        
        string str;
        
        while(!pq.empty()){
            int freq=pq.top().first;
            char elem=pq.top().second;
            pq.pop();
            
            while(freq--){
                str.push_back(elem);
            }
        }
        
        return str;
    }
};