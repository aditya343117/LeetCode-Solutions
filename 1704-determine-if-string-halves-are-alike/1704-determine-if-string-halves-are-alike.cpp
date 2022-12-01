class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int n=s.size();
        
        string first=s.substr(0, n/2);
        string second=s.substr(n/2);
        
        int count=0;
        
        for(int i=0; i<first.size(); i++){
            if(first[i]=='a'||first[i]=='A'||first[i]=='i'||first[i]=='I'||first[i]=='o'||first[i]=='O'||first[i]=='u'||first[i]=='U'||first[i]=='e'||first[i]=='E'){
                count++;
            }
        }
        int count1=0;
        for(int i=0; i<second.size(); i++){
            if(second[i]=='a'||second[i]=='A'||second[i]=='i'||second[i]=='I'||second[i]=='o'||second[i]=='O'||second[i]=='u'||second[i]=='U'||second[i]=='e'||second[i]=='E'){
                count--;
            }
        }
     
        if(count==0) return true;
        else return false;
    }
};