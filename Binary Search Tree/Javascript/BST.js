//Javascript implementation of a Binary Search Tree using ES6

class Node {
    constructor(data) {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}

class BinarySearchTree {
    constructor() {
        this.root = null;
    }

    insert = data => {
        let newNode = new Node(data);

        this.root === null
            ? (this.root = newNode)
            : this.insertNode(this.root, newNode);
    };

    remove = data => {
        //The root is replaced with the root of the modified tree/
        this.root = this.removeNode(this.root, data);
    };

    inorder = node => {
        if (node !== null) {
            this.inorder(node.left);
            console.log(node.data);
            this.inorder(node.right);
        }
    };

    preorder = node => {
        if (node != null) {
            console.log(node.data);
            this.preorder(node.left);
            this.preorder(node.right);
        }
    };

    postorder = node => {
        if (node != null) {
            this.postorder(node.left);
            this.postorder(node.right);
            console.log(node.data);
        }
    };

  search(node, data) {
    if (node === null)  {
      return null;
    } else if (data < node.data)  {
      return this.search(node.left, data);
    } else if (data > node.data)  {
      return this.search(node.right, data);
    } else {
      return node;
    }
  } 

    insertNode = (node, newNode) => {
        if (newNode.data < node.data) {
            node.left === null
                ? (node.left = newNode)
                : this.insertNode(node.left, newNode);
        } else {
            node.right === null
                ? (node.right = newNode)
                : this.insertNode(node.right, newNode);
        }
    };

    removeNode = (node, target) => {
        if (this.root === null) {
            return null;
        } else if (target < node.data) {
            node.left = this.removeNode(node.left, target);
            return node;
        } else if (target > node.data) {
            node.right = this.removeNode(node.right, target);
        } else {
            if (node.left === null && node.right === null) {
                node = null;
                return node;
            }

            if (node.left === null) {
                node = node.right;
                return node;
            } else if (node.right === null) {
                node = node.left;
                return node;
            }

            let tmpNode = this.findMinNode(node.right);
            node.data = tmpNode.data;

            node.right = this.removeNode(node.right, tmpNode.data);
            return node;
        }
    };

    // Helper functions
    findMinNode = node => {
        if (node.left === null) {
            return node;
        } else {
            this.findMinNode(node.left);
        }
    };
    // getRootNode()
    // inorder(node)
    // preorder(node)
    // postorder(node)
    // search(node, data)
}
