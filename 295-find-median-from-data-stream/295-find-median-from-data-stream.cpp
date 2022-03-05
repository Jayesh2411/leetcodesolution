class MedianFinder {
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
public:
    int size;
    MedianFinder() {
        size = 0;
    }
    
    void addNum(int num) {
        if(minHeap.empty() || minHeap.top() <= num)
            minHeap.push(num);
        else
            maxHeap.push(num);
        ++size;
        if(minHeap.size() > maxHeap.size() + size%2)
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
        else if(maxHeap.size() > minHeap.size())
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
    }
    
    double findMedian() {
        if( size % 2 != 0 )
            return minHeap.top();
        return (minHeap.top() + maxHeap.top())/2.0;        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */