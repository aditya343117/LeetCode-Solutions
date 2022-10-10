class Solution {
public:
    bool checkfornotpal(string s){
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return true;
            }
            i++;
            j--;
        }
        
        return false;
    }
    
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1) return "";
        
        for(int i=0; i<palindrome.size(); i++){
            if(palindrome[i]!='a'){
                char t=palindrome[i];
                palindrome[i]='a';
                if(checkfornotpal(palindrome)){
                   return palindrome;  
                }else{
                   palindrome[i]=t; 
                }
                
            }
        }
        
        palindrome[palindrome.size()-1]='b';
        return palindrome;
    }
};