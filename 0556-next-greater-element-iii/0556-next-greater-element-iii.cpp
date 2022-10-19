class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        
        int i,j;
        
        for(i=s.size()-2; i>=0; i--){
            if(s[i]<s[i+1]) break;
        }
        
        if(i<0) return -1;
        
        for(j=s.size()-1; j>=0; j--){
            if(s[j]>s[i]) break;
        }
        swap(s[i], s[j]);
        reverse(s.begin()+i+1, s.end());
        
        int ans=stoll(s);       //string to long long conversion 
        if(ans>n) return ans;   //it ensure that our ans is greater than n
        return -1;
    }
};