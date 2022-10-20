class Solution {
public:
    int addDigits(int num) {
        
        string s= to_string(num);
        
        while(s.size()!=1){
            long long t=stoll(s);
            int sum=0;
            while(t){
                int temp=t%10;
                sum+=temp;
                t=t/10;
            }
           s=to_string(sum); 
        }
        
        return stoll(s);
    }
};