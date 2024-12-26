#include <iostream>
using namespace std;

// Definition of a tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Class for Binary Tree
class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = nullptr;
    }

    // Inorder Traversal: Left, Root, Right
    void inorder(Node* node) {
        if (node == nullptr) {
            return;
        }
        inorder(node->left); // Traverse left subtree
        cout << node->data << " "; // Visit node
        inorder(node->right); // Traverse right subtree
    }

    // Preorder Traversal: Root, Left, Right
    void preorder(Node* node) {
        if (node == nullptr) {
            return;
        }
        cout << node->data << " "; // Visit node
        preorder(node->left); // Traverse left subtree
        preorder(node->right); // Traverse right subtree
    }

    // Postorder Traversal: Left, Right, Root
    void postorder(Node* node) {
        if (node == nullptr) {
            return;
        }
        postorder(node->left); // Traverse left subtree
        postorder(node->right); // Traverse right subtree
        cout << node->data << " "; // Visit node
    }

    // Wrapper methods for traversals
    void inorder() {
        inorder(root);
    }

    void preorder() {
        preorder(root);
    }

    void postorder() {
        postorder(root);
    }
};

int main() {
    BinaryTree tree;

    // Creating a sample binary tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5

    tree.root = new Node(1);
    tree.root->left = new Node(2);
    tree.root->right = new Node(3);
    tree.root->left->left = new Node(4);
    tree.root->left->right = new Node(5);

    cout << "Inorder Traversal: ";
    tree.inorder();
    
    cout << "\nPreorder Traversal: ";
    tree.preorder();
    
    cout << "\nPostorder Traversal: ";
    tree.postorder();
    
    return 0;
}
