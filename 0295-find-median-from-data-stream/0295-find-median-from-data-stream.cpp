class MedianFinder {
public:
    
    priority_queue<int>leftpq;      //maxHeap
    priority_queue<int, vector<int>, greater<int>>rightpq;    //minHeap
    
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
         if(rightpq.size()==0 && leftpq.size()==0){
             rightpq.push(num);      // bydefault we push into right
         }else if(num>rightpq.top()){
             rightpq.push(num);
         }else{
             leftpq.push(num);
         }
        
         if(leftpq.size()>rightpq.size()+1){
            rightpq.push(leftpq.top());
            leftpq.pop(); 
         }else if(rightpq.size()>leftpq.size()+1){
             leftpq.push(rightpq.top());
             rightpq.pop();
         }
    }
    
    double findMedian() {
        if(leftpq.size()==rightpq.size()){
            return (leftpq.top()+rightpq.top())/2.0; 
        }else if(leftpq.size()>rightpq.size()){
            return leftpq.top();
        }else{
            return rightpq.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */