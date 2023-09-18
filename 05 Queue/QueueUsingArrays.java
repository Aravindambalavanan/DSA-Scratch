class QueueUsingArrays {

  static final int MAX_SIZE = 30;
  int[] queue;
  int front, rear;

  QueueUsingArrays() {
    queue = new int[MAX_SIZE];
    front = -1;
    rear = -1;
  }

  public void enqueue(int val) {
    if (rear == MAX_SIZE - 1) {
      throw new IndexOutOfBoundsException("Queue is full");
    }
    if (front == -1) {
      front = -1;
      queue[++rear] = val;
    }
  }

  public int dequeue() {
    if (front == -1) {
      throw new IndexOutOfBoundsException("Queue is Empty");
    }
    return queue[front++];
  }
}
