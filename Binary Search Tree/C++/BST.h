#include <iostream>

using namespace std;

template <class T>
struct Node
{
  T data;
  Node *left;
  Node *right;

  Node  {
    data = NULL;
    left = NULL;
    right = NULL;

    Node(T value) {
      this.value = value;
    }

    Node(Node* left, Node* right, T value)  {
      this.value = value;
      this.left = left;
      this.right = right;
    }
  }
};

template<class T>
class BinarySearchTree
{
  private:
  Node<T>* root;

  public:
  BinarySearchTree(T value) { root = new Node(T value)}
  bool insert(Node* node, T value);
  bool addHelper(Node* node, T value);
  bool remove(Node *node, T value);
  bool removeHelper(Node<T>* parent, Node*<T> current, T value)
  Node<T>* findMin(Node<T>* root);
  Node<T>* find(Node<T>* root, T target)
};