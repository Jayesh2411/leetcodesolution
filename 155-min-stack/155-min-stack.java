class MinStack {
    int[] stack;
    int top = -1;
    public MinStack() {
        stack = new int[30000];
    }
    
    public void push(int val) {
        stack[++top] = val;
    }
    
    public void pop() {
        top--;
    }
    
    public int top() {
        return stack[top];
    }
    
    public int getMin() {
        int min = Integer.MAX_VALUE;
        for (int i= 0;i<=top;i++) {
            if (stack[i] < min) {
                min = stack[i];
            }
        }
        return min;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */