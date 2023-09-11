public class LinkedListStack {
    Node top;

    class Node {
        int data;
        Node next;

        Node(int val) {
            data = val;
            next = null;
        }
    }

    LinkedListStack() {
        top = null;
    }

    void push(int val) {
        Node newNode = new Node(val);

        if (top == null) {
            top = newNode;
        } else {
            newNode.next = top;
            top = newNode;
        }
    }

    int pop() {
        if (top == null) {
            throw new IndexOutOfBoundsException("Stack is Empty");
        }
        int temp = top.data;
        top = top.next;
        return temp;
    }

    boolean isEmpty() {
        return top == null;
    }

    int peek() {
        return top.data;
    }
}
