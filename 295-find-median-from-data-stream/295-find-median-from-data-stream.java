class MedianFinder {
    PriorityQueue<Integer> maxHeap = new PriorityQueue(Collections.reverseOrder());
    PriorityQueue<Integer> minHeap = new PriorityQueue();
    
    public MedianFinder() {
        
    }
    
    public void addNum(int num) {
        if (maxHeap.isEmpty() || maxHeap.peek() >= num ) {
            maxHeap.add(num);
        } else {
            minHeap.add(num);
        }
        
        if(minHeap.size()+1 < maxHeap.size()) {
            minHeap.add(maxHeap.poll());
            
        }else if(minHeap.size() > maxHeap.size()) {
            maxHeap.add(minHeap.poll());
        }
    }
    
    public double findMedian() {
        if(maxHeap.size() == minHeap.size()) {
            return Double.valueOf((minHeap.peek()+maxHeap.peek())/2d);
        } 
        return Double.valueOf(maxHeap.peek());
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */