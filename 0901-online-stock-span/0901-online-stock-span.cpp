class StockSpanner {
public:
    
    stack<pair<int, int>>st;
    int indx=0;
        
    StockSpanner() {
         
    }
    
    
    int next(int price) {
         
        int res=0;
        
        while(!st.empty() && st.top().first<=price){
            st.pop();
        }
        
        if(st.size()==0){
            res=indx-(-1);
        }else{
            res=indx-(st.top().second);
        }
        
        st.push({price, indx++});
        
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */