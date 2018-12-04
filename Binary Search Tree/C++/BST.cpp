#include "BST.h"

using namespace std;

template <class T>
bool addHelper(Node<T> *root, T value)
{
  if (value < root.value)
  {
    if (root.left == NULL)
    {
      root.left = new Node(value);
      return true
    }
    else
    {
      insert(root.left, value);
    }
  }
  else
  {
    if (root.right == NULL)
    {
      root.right = new Node(value);
      return true
    }
    else
    {
      insert(root.right, value);
    }
  }
  return false
}

template <class T>
bool removeHelper(Node<T> *root, T target)
{
  if (root == NULL)
  {
    return false;
  }
  else if (target < root.value)
  {
    root.left = removeHelper(root.left, target)
  }
  else if (target > root.value)
  {
    root.right = removeHelper(root.right, target)
  }
  else if (root.left && root.right)
  {
    temp = findMin(root.right);
    root.data = temp.data;
    root.right = remove(root.data, root.right);
  }
  else
  {
    temp = root;
    if (root.left == NULL)
      root = root.right;
    else if (root.right == NULL)
      root = root.left;
    delete temp;
  }
  return t
}

template <class T>
bool insert(Node<T> *root, T value)
{
  if (root == NULL)
  {
    root = new Node<T>(value) return true
  }
  else
  {
    return insert(root, value)
  }
}

template <class T>
bool remove(Node<T> *root, T value)
{
  if (root == NULL) {
    return false
  } else {
    removeHelper(root, value)
  }
}

template <class T>
Node<T>* findMin(Node<T>* root) {
  if (root == NULL)
    return NULL;
  else if (root.left == NULL)
    return root;
  else
    return findMin(t.left);
}