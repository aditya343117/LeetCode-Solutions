class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxsum=INT_MIN;
        int sum=0;
        
        for(int i=0; i<k; i++){
            sum+=cardPoints[i];
        }
        maxsum=sum;
        
        for(int i=k-1; i>=0; i--){
            sum=sum-cardPoints[i];    //from begining we remove one by one 
            sum=sum+cardPoints[cardPoints.size()-k+i];
            maxsum=max(maxsum, sum);
        }
        
        return maxsum;
    }
};