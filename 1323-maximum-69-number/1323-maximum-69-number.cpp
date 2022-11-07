class Solution {
public:
    int maximum69Number (int num) {
        int maxnum=INT_MIN;
        
        string s=to_string(num);
        
        for(int i=0; i<s.size(); i++){
            string t=s;
            t[i]='9';
            int n=stoi(t);
            if(n>maxnum){
                maxnum=n;
            }
        }
        return maxnum;
    }
};