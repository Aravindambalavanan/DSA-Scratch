class BinarySearchTree {

  Node root;

  class Node {

    int data;
    Node left, right;

    public Node(int val) {
      data = val;
      left = null;
      right = null;
    }
  }

  public BinarySearchTree(int val) {
    root = new Node(val);
  }

  public BinarySearchTree() {
    root = null;
  }

  public Node insert(Node root, int val) {
    if (root == null) {
      return new Node(val);
    }
    if (val < root.data) {
      root.left = insert(root.left, val);
    } else {
      root.right = insert(root.right, val);
    }
    return root;
  }

  public void inOrder(Node root) {
    if (root != null) {
      inOrder(root.left);
      System.out.println(root.data);
      inOrder(root.right);
    }
  }

  public void preOrder(Node root) {
    if (root != null) {
      System.out.println(root.data);
      preOrder(root.left);
      preOrder(root.right);
    }
  }

  public void postOrder(Node root) {
    if (root != null) {
      preOrder(root.left);
      preOrder(root.right);
      System.out.println(root.data);
    }
  }

  public Node search(Node root, int val) {
    if (root == null || root.data == val) {
      return root;
    }

    if (val < root.data) {
      return search(root.left, val);
    }
    return search(root.right, val);
  }
}
