class Solution {
public:
    string minWindow(string s, string t) {
        int i=0;
        int j=0;
        int idx=-1;
        unordered_map<char, int>mp;
        for(auto it: t){
            mp[it]++;
        }
        
        int count=mp.size();
        
        int length=INT_MAX;
       
     
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0) count--;
            }
            
               while(count==0){ 
                int ws=j-i+1;
                if(ws<length){
                    length=ws;
                    idx=i;
                }
                
                if(mp.find(s[i])!=mp.end()){     // slide the window
                    mp[s[i]]++;
                    if(mp[s[i]]==1){
                        count++;
                    }
                }
                i++;
            }
            
           j++; 
        }
        return (idx==-1)?"":s.substr(idx, length);
    }
};