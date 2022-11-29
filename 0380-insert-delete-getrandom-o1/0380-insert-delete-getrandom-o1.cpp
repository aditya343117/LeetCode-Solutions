class RandomizedSet {
public:
    
    set<int>st;
    
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
         if(st.find(val)==st.end()){
            st.insert(val);
            return true; 
         }else{
            return false;
         }
    }
    
    bool remove(int val) {
         if(st.find(val)!=st.end()){
            st.erase(val);
            return true; 
         }else{
            return false;
         }
    }
    
    int getRandom() {
        
        vector<int>v;
        for(auto it: st){
            v.push_back(it);
        }
        
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */