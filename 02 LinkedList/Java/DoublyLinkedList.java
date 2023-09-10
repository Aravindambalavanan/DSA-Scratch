class DoublyLinkedList {

    Node head;
    Node tail;

    class Node {

        int data;
        Node next;
        Node prev;

        Node(int val) {
            data = val;
            next = null;
            prev = null;
        }
    }

    DoublyLinkedList() {
        head = null;
        tail = null;
    }

    public void insertAtBeginning(int val) {
        Node newNode = new Node(val);
        newNode.next = head;
        if (head == null) {
            tail = newNode;
        } else {
            head.prev = newNode;
        }
        head = newNode;
    }

    public void insertAtPos(int pos, int val) {
        if (pos == 0) {
            insertAtBeginning(val);
            return;
        }
        Node newNode = new Node(val);
        Node current = head;
        Node bef = null;
        for (int i = 0; i < pos; i++) {
            bef = current;
            current = current.next;
            if (current == null) {
                throw new IndexOutOfBoundsException("Invalid Position");
            }
        }

        if (current == tail) {
            newNode.prev = current.next;
            tail = newNode;
            return;
        }
        newNode.next = bef.next;
        current.prev = newNode;
        newNode.prev = bef;
        bef.next = newNode;
    }

    public void revDisplay() {
        Node temp = tail;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.prev;
        }
    }

    public void display() {
        Node temp = head;
        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public void deleteAtPos(int pos) {
        if (pos == 0) {
            head = head.next;
        }
        Node current = head;
        Node bef = null;
        for (int i = 0; i < pos; i++) {
            bef = current;
            current = current.next;
            if (current == null) {
                throw new IndexOutOfBoundsException("Invalid Position");
            }
        }
        if (current == tail) {
            current.prev = null;
            bef.next = null;
            return;
        }
        bef.next = current.next;
        current.next.prev = current.prev;
    }
}
