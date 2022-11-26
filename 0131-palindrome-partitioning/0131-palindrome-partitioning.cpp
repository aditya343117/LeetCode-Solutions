class Solution {
public:
    vector<vector<string>>ans;
    
    bool palindrom(string s){
        int i=0;
        int j=s.size()-1;
        
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        
        return true;
    }
    
    void solve(vector<string> op, string ip){
        
        if(ip.size()==0){
            ans.push_back(op);
            return;
        }
        
        
        for(int i=0; i<ip.size(); i++){
            string t=ip.substr(0, i+1);
            
            if(palindrom(t)){
                vector<string>op1=op;
                op1.push_back(t);
               
                string ip1=ip;
                ip1.erase(0, i+1);
               solve(op1, ip1); 
            }
        }
        
    }
    
    vector<vector<string>> partition(string s) {
        string ip=s;
        vector<string>op;
        
        solve(op, ip);
        
        return ans;
    }
};