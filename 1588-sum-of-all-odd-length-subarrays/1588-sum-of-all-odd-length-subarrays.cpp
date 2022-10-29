class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0; i<arr.size(); i++){
            int start=i;
            int end=i;
            while(end<arr.size()){
                int s=0;
                for(int j=start; j<=end; j++){
                    s+=arr[j];
                }
                sum+=s;
                end=end+2;
            }
        }
        return sum;
    }
};