class MyHashMap {
    ArrayList<Integer> indices;
    ArrayList<Node> map;
    public MyHashMap() {
        this.map = new ArrayList<>();
        this.indices = new ArrayList<>();
    }
    
    public void put(int key, int value) {
        for(int i=0;i<indices.size();i++) {
            if(indices.get(i) == key) {
                Node node =  map.get(i);
                node.val = value;
                return;
            }
        }
        indices.add(key);
        map.add(new Node(key,value));
    }
    
    public int get(int key) {
        for(int i=0;i<indices.size();i++) {
            if(indices.get(i) == key) {
                Node node =  map.get(i);
                return node.val;
            }
        }
        return -1;
    }
    
    public void remove(int key) {
        for(int i=0;i<indices.size();i++) {
            if(indices.get(i) == key) {
                indices.remove(i);
                map.remove(i);
            }
        }
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