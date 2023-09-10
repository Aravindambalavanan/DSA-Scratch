class CircularLinkedList {
    Node last;

    class Node {
        int data;
        Node next;

        Node(int val) {
            data = val;
            next = null;
        }
    }

    CircularLinkedList() {
        last = null;
    }

    public void insertAtBeginning(int val) {
        Node newNode = new Node(val);

        if (last == null) {
            newNode.next = newNode;
            last = newNode;
        } else {
            newNode.next = last.next;
            last.next = newNode;
        }
    }

    public void insertAtEnd(int val) {
        Node newNode = new Node(val);

        if (last == null) {
            newNode.next = newNode;
            last = newNode;
        } else {
            newNode.next = last.next;
            last.next = newNode;
            last = newNode;
        }
    }

    public void deleteAtBeginning() {
        if (last == null) {
            throw new IndexOutOfBoundsException("Deletion Attempted on Empty List");
        }
        if (last.next == last) {
            last = null;
        } else {
            last.next = last.next.next;
        }
    }

    public void deleteAtEnd() {
        if (last == null) {
            throw new IndexOutOfBoundsException("Deletion Attempted on Empty List");
        }
        if (last.next == last) {
            last = null;
        } else {
            Node temp = last.next;
            while (temp.next != last) {
                temp = temp.next;
            }
            temp.next = last.next;
            last = temp;
        }
    }

    public void display() {
        if (last == null) {
            return;
        }
        Node temp = last.next;
        do {
            System.out.println(temp.data);
            temp = temp.next;
        } while (temp != last.next);
    }
}
