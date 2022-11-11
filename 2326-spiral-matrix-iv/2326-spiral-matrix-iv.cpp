/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        vector<vector<int>>v(m, vector<int>(n, -1));
        vector<int>h;
        
        while(head){
            h.push_back(head->val);
            head=head->next;
        }
        
        int maxr=m;
        int maxc=n;
        
        int minr=0;
        int minc=0;
        
        int tc=m*n;
        int count=0;
        int number=0;
        
        int size=h.size();
        
        while(count<tc && number<size){
            
             for(int i=minr, j=minc; j<maxc &&count<tc&& number<size; j++){
                 v[i][j]=h[number++];
                 count++;
             }
            minr++;
            
            for(int i=minr, j=maxc-1; i<maxr &&count<tc&& number<size; i++){
               v[i][j]=h[number++];
                count++;
            }
            maxc--;
            
            for(int i=maxr-1, j=maxc-1; j>=minc &&count<tc&& number<size; j--){
                v[i][j]=h[number++];
                count++;
            }
            maxr--;
             
            for(int i=maxr-1, j=minc; i>=minr &&count<tc&& number<size; i--){
                v[i][j]=h[number++];
                count++;
            }
            minc++;
            
        }
        
        vector<vector<int>>ans;
        
         for(int i=0; i<m; i++){
             vector<int>t1;
            for(int j=0; j<n; j++){
                t1.push_back(v[i][j]);
            }
            ans.push_back(t1);
        }
        return ans;
        
    }
};