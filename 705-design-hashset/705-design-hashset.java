class MyHashSet {
    Boolean[] hashSet = new Boolean[1000001];
    public MyHashSet() {
        Arrays.fill(hashSet,false);
    }
    
    public void add(int key) {
        hashSet[key]  = true;
    }
    
    public void remove(int key) {
        hashSet[key] = false;
    }
    
    public boolean contains(int key) {
        return hashSet[key];
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */