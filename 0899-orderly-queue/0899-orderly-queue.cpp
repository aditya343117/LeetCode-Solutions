class Solution {
public:
    string orderlyQueue(string s, int k) {
          if(k>1){
              sort(s.begin(), s.end());
              return s;
          }else{
              vector<string>str;
              int size=s.size();
              while(size--){
                  char c=s[0];
                  s.erase(s.begin()+0);
                  s.push_back(c);
                  str.push_back(s);
              }
              
              sort(str.begin(), str.end());
              return str[0];
          } 
    }
};