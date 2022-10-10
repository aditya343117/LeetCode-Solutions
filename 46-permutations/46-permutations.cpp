class Solution {
public:
    vector<vector<int>>ans;
    
    void solve(vector<int>op, vector<int>ip){
         
        if(ip.size()==0){
            ans.push_back(op);
            return;
        }
        
        for(int i=0; i<ip.size(); i++){
            vector<int>op1=op;
            vector<int>ip1=ip;
            op1.push_back(ip[i]);
            ip1.erase(ip1.begin()+i);
            
            solve(op1, ip1);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>op;
        vector<int>ip=nums;
        solve(op, ip);
        
        return ans;
    }
};