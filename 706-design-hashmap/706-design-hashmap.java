class MyHashMap {
    ArrayList<Integer> indices;
    
    public MyHashMap() {
        this.indices = new ArrayList<>();
        for (int i = 0;i<=1000001;i++) {
            indices.add(i,null);
        }
    }
    
    public void put(int key, int value) {
             indices.set(key,value); 
    }
    
    public int get(int key) {
        if( indices.get(key) == null) {
            return -1;
        }
        return indices.get(key);
    }
    
    public void remove(int key) {
        indices.set(key,null);
    }
}
class Node {
    int key;
    int val;
    public Node() {
        
    }
    public Node(int key, int val) {
        this.key = key;
        this.val = val;
    }
}
/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap obj = new MyHashMap();
 * obj.put(key,value);
 * int param_2 = obj.get(key);
 * obj.remove(key);
 */