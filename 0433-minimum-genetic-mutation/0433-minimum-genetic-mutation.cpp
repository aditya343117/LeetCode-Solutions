class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        int count=0;
        queue<string>q;
        unordered_set<string>visited;
        q.push(start);
        
        while(!q.empty()){
            int qsize=q.size();
             while(qsize--){
                 string startgen=q.front();
                 q.pop();
                 if(startgen==end){
                     return count;
                 }
                 for(auto it: "ACGT"){
                     for(int i=0; i<startgen.size(); i++){
                         string newstring=startgen;
                         newstring[i]=it;
                         if(visited.find(newstring)==visited.end() && find(bank.begin(), bank.end(),newstring)!=bank.end()){
                            q.push(newstring);
                            visited.insert(newstring); 
                         }
                     }
                 }
             }
            count++;
        }
        return -1;
    }
};