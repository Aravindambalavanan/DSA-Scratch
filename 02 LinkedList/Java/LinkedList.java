class LinkedList {

    Node head;

    class Node {

        int data;
        Node next;

        Node(int val) {
            data = val;
            next = null;
        }
    }

    public LinkedList() {
        head = null;
    }

    public void insertAtBeginning(int val) {
        Node newNode = new Node(val);
        if (head == null) {
            head = newNode;
        } else {
            newNode.next = head;
            head = newNode;
        }
    }

    public void display() {
        Node temp = head;

        while (temp != null) {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public void insertAtPos(int pos, int val) {
        if (head == null) {
            throw new IndexOutOfBoundsException("Deletion attempted on Empty List");
        }
        if (pos == 0) {
            insertAtBeginning(val);
            return;
        }
        Node temp = head;

        for (int i = 0; i < pos - 1; i++) {
            temp = temp.next;
            if (temp == null) {
                throw new IllegalArgumentException("Invalid Position");
            }
        }

        Node newNode = new Node(val);

        newNode.next = temp.next;
        temp.next = newNode;
    }

    public void deleteAtPos(int pos) {
        Node current = head;
        Node prev = null;
        if (pos == 0) {
            head = head.next;
            return;
        }
        for (int i = 0; i < pos; i++) {
            prev = current;
            current = current.next;
        }
        prev.next = current.next;
    }
}
