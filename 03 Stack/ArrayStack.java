class ArrayStack {
    static final int MAX_SIZE = 30;

    int[] stack = new int[MAX_SIZE];

    int top;

    ArrayStack() {
        top = -1;
    }

    void push(int val) {
        if (top == MAX_SIZE - 1) {
            throw new IndexOutOfBoundsException("Stack Overflow");
        }
        stack[++top] = val;
    }

    int pop() {
        if (top == -1) {
            throw new IndexOutOfBoundsException("Stack Underflow");
        }
        return stack[top--];
    }

    int peek() {
        return stack[top];
    }

    boolean isEmpty() {
        return top == -1;
    }

    boolean isFull() {
        return top == MAX_SIZE - 1;
    }

}