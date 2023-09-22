#include <iostream>
#include <vector>
using namespace std;

void
minHeapify(vector<int>& heap, int size, int rootIndex)
{
  int smallest = rootIndex;
  int leftChild = 2 * rootIndex + 1;
  int rightChild = 2 * rootIndex + 2;

  if (leftChild < size && heap[leftChild] < heap[smallest]) {
    smallest = leftChild;
  }

  if (rightChild < size && heap[rightChild] < heap[smallest]) {
    smallest = rightChild;
  }

  if (smallest != rootIndex) {
    swap(heap[rootIndex], heap[smallest]);
    minHeapify(heap, size, smallest);
  }
}

void
insertIntoMinHeap(vector<int>& heap, int element)
{
  heap.push_back(element);
  int currentIndex = heap.size() - 1;

  while (currentIndex > 0) {
    int parentIndex = (currentIndex - 1) / 2;
    if (heap[currentIndex] < heap[parentIndex]) {
      swap(heap[currentIndex], heap[parentIndex]);
      currentIndex = parentIndex;
    } else {
      break;
    }
  }
}

void
deleteMinFromMinHeap(vector<int>& heap)
{
  if (heap.empty()) {
    cout << "Heap is empty." << endl;
    return;
  }

  swap(heap[0], heap[heap.size() - 1]);
  heap.pop_back();
  minHeapify(heap, heap.size(), 0);
}

void
display(vector<int>& heap, int n, int i, int space, int gap)
{
  if (i < n) {
    space += gap;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    display(heap, n, right, space, gap);
    cout << endl;
    for (int j = gap; j < space; j++) {
      cout << " ";
    }
    cout << heap[i] << "\n";
    display(heap, n, left, space, gap);
  }
}

int
main()
{
  vector<int> minHeap;
  int num;
  cout << "Enter the number of elements to be inserted : ";
  cin >> num;
  cout << "Min Heap: ";
  for (int i = 0; i < num; i++) {
    int value;
    cout << "Enter the value : ";
    cin >> value;
    insertIntoMinHeap(minHeap, value);
    display(minHeap, minHeap.size(), 0, 0, 4);
  }
  cout << endl;
  deleteMinFromMinHeap(minHeap);
  cout << "Min Heap after deleting min: ";
  display(minHeap, minHeap.size(), 0, 0, 4);
  cout << endl;
  return 0;
}