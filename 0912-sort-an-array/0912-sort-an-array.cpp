class Solution {
public:
    void merge(vector<int>&nums, int s, int mid, int e){
        int n1=mid-s+1;
        int n2=e-mid;
        
        vector<int>a(n1);
        vector<int>b(n2);
        
        for(int i=0; i<n1; i++){
            a[i]=nums[s+i];
        }
        
        for(int i=0; i<n2; i++){
            b[i]=nums[mid+1+i];
        }
        
        int i=0;
        int j=0;
        int k=s;
        
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                nums[k]=a[i];
                k++;
                i++;
            }else{
                nums[k]=b[j];
                j++;
                k++;
            }
        }
        
        while(i<n1){
            nums[k]=a[i];
            k++;
            i++;
        }
        
        while(j<n2){
            nums[k]=b[j];
            k++;
            j++;
        }
    }
    
    void mergesort(vector<int>&nums, int s, int e){
        
        if(s<e){
            int mid=s+(e-s)/2;
            mergesort(nums, s, mid);
            mergesort(nums, mid+1, e);
            merge(nums, s, mid, e);
        }
    }
    
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size()-1);
        return nums;
    }
};