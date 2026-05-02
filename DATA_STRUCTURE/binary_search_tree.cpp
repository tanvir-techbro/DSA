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
                        cout << node->data << " ";
                        inorder(node->right);
                }
        }

        // Helper function for searching
        bool search(Node *node, int key) {
                if (node == nullptr) {
                        return false;
                }
                if (node->data == key) {
                        return true;
                }

                // check the left node if the key is smaller
                if (key < node->data) {
                        return search(node->left, key);
                }
                // if grated than root's key
                return search(node->right, key);
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

        bool search(int key) {
                return search(root, key);
        }
};

int main(int argc, char *argv[]) {
        BST tree;

        int test_cases;
        cin >> test_cases;

        for (int i = 0; i < test_cases; i++) {
                int temp;
                cin >> temp;

                tree.insert(temp);
        }

        // Print In-order Traversal
        cout << "In-order Traversal of the BST: ";
        tree.display();

        // Search for a value
        int keyToFind;
        cout << "Enter a value to search for: ";
        cin >> keyToFind;
        if (tree.search(keyToFind)) {
                std::cout << "Element " << keyToFind << " is found in the BST." << std::endl;
        } else {
                std::cout << "Element " << keyToFind << " is not found in the BST." << std::endl;
        }

        return 0;
}
