#include <cstddef>
#include <iostream>
using namespace std;

struct node {
        int data;
        node *left;
        node *right;

        // constructor
        node(int val) {
                data = val;
                left = nullptr;
                right = nullptr;
        }
};

class binaryTree {
      public:
        node *root;

        binaryTree() {
                root = nullptr;
        }
};

int main(int argc, char *argv[]) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        binaryTree tree;
        tree.root = new node(1);

        return 0;
}
