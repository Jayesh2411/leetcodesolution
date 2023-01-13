// Java Iterator interface reference:
// https://docs.oracle.com/javase/8/docs/api/java/util/Iterator.html

class PeekingIterator implements Iterator<Integer> {
    class Node {
        Integer val;
        Node next;

        public Node(Integer val, Node next) {
            this.val = val;
            this.next = next;

        }
    }

    Node root;

    public PeekingIterator(Iterator<Integer> iterator) {
        // initialize any member here.
        Node node = null;
        while (iterator.hasNext()) {
            if (node == null) {
                node = new Node(iterator.next(), null);
                this.root = node;
            } else {
                Node newNode = new Node(iterator.next(), null);
                node.next = newNode;
                node = node.next;
            }

        }
    }

    // Returns the next element in the iteration without advancing the iterator.
    public Integer peek() {
        return this.root.val;
    }

    // hasNext() and next() should behave the same as in the Iterator interface.
    // Override them if needed.
    @Override
    public Integer next() {
        Integer i = this.root.val;
        this.root = this.root.next;
        return i;
    }

    @Override
    public boolean hasNext() {
        return root != null;
    }
}