class Solution {
public:
    string makeGood(string s) {
        int i=0;
        int j=1;
        
        while(!s.empty() && i<s.size()){
          
            if(s[i]==s[j]+32 || s[i]+32==s[j]){
                s.erase(s.begin()+i);
                s.erase(s.begin()+j-1);
            }else if(i>=1 && s[i]==s[i-1]-32 ||i>=1 && s[i]==s[i-1]+32){
                i=i-1;
                j=j-1;
            }else{ 
                i++;
                j++;
            }
        }
       
        
        return s;
    }
};