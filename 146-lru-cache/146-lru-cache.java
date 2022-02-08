class LRUCache {
    
     int capacity;
    LinkedHashSet<Integer> set;
    HashMap<Integer, Integer> map;

    public LRUCache(int capacity) {
        this.capacity = capacity;
        set = new LinkedHashSet(capacity);
        map = new HashMap();
    }

    public int get(int key) {
        if (!set.contains(key))
            return -1;
        set.remove(key);
        set.add(key);
        Integer v = map.get(key);
        return v;
    }

    String put(int key, int val) {
        map.put(key, val);
        if (set.contains(key)) {
            set.remove(key);
            set.add(key);
            return null;
        }
        if (set.size() == this.capacity) {
            Integer element = set.iterator().next();
            set.remove(element);
        }
        set.add(key);
        return null;
    }


}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */