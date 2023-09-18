public class QueueUsingLinkedList {
    Node front, rear;

    class Node {
        int data;
        Node next;

        public Node(int val) {
            data = val;
            next = null;
        }
    }

    QueueUsingLinkedList() {
        front = null;
        rear = null;
    }

    public void enqueue(int val) {
        Node newNode = new Node(val);

        if (front == null) {
            front = rear = newNode;
        }
        rear.next = newNode;
        rear = newNode;
    }

    public int dequeue() {
        if (front == null) {
            throw new IndexOutOfBoundsException("Queue is Empty");
        }
        int temp = front.data;

        front = front.next;

        return temp;
    }

}
