#include <iostream>
using namespace std;

// Tree structure
struct Node {
        int data;
        Node *left;
        Node *right;

        // Constructor
        Node(int val) {
                data = val;
                left = nullptr;
                right = nullptr;
        }
};

// Binary search tree class
class BST {
      private:
        Node *root;

        // helper function to insert node recursively
        Node *insert(Node *node, int val) {
                // if the node is empty, return a new node
                if (node == nullptr) {
                        return new Node(val);
                }

                if (val < node->data) {
                        node->left = insert(node->left, val);
                } else if (val > node->data) {
                        node->right = insert(node->right, val);
                }

                return node;
        }

        // Helper function for in order triversal
        void inorder(Node *node) {
                if (node != nullptr) {
                        inorder(node->left);
                        cout << node->data << '\n';
                        inorder(node->right);
                }
        }

      public:
        // constructor to initialize the binary search tree
        BST() {
                root = nullptr;
        }

        void insert(int val) {
                root = insert(root, val);
        }

        void display() {
                inorder(root);
                cout << '\n';
        }
};

int main(int argc, char *argv[]) {
        BST tree;

        // Insert nodes into BST
        tree.insert(50);
        tree.insert(30);
        tree.insert(20);
        tree.insert(40);
        tree.insert(70);
        tree.insert(60);
        tree.insert(80);

        // Print In-order Traversal
        cout << "In-order Traversal of the BST: ";
        tree.display();

        return 0;
}
