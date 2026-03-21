#include <cstddef>
#include <iostream>
using namespace std;

/*
 * Linked list = A liner data structure where data is not stored in contigeous memory.
 * Instead there is nodes pointing to the next node.
 */

// Singly linked list
struct node {
        int data;   // Data savd in the current node.
        node *next; // Pointer to the next node.

        node(int value) {
                data = value;
                next = NULL;
        }
};
class linkedlist {
      public:
        node *head;
        node *tail;

        linkedlist() {
                head = NULL;
                tail = NULL;
        }

        void print_linkedlist() {
                node *temp = head;
                while (temp != NULL) {
                        cout << temp->data << " -> ";
                        temp = temp->next;
                }
                cout << "NULL" << endl;
        }

        // Adding a node before head
        void insert_at_head(int data) {
                node *newNode = new node(data);
                newNode->next = head;
                head = newNode;
        }
        // Adding a node at the end
        void insert_at_end(int data) {
                node *newNode = new node(data);

                if (head == NULL) {
                        head = newNode;
                        return;
                }

                node *temp = head;
                while (temp->next != NULL) {
                        temp = temp->next;
                }
                temp->next = newNode;
        }
        // Adding a node at a certain position
        void insert_at_position(int position, int data) {
                if (position < 1) {
                        cout << "Position invaid." << endl;
                        return;
                } else if (position == 1) {
                        insert_at_head(data);
                        return;
                }

                node *newNode = new node(data);
                node *temp = head;

                for (int i = 1; i < position - 1 && temp != NULL; i++) {
                        temp = temp->next;
                }

                if (temp == NULL) {
                        cout << "Position invaid" << endl;
                        delete newNode;
                        return;
                }

                newNode->next = temp->next;
                temp->next = newNode;
        }
};

// Function to print the linked listi
void print_linkedlist(node *n);

int main(int argc, char *argv[]) {

        linkedlist mylist;

        mylist.print_linkedlist();
        // Inserting a new element at the head
        mylist.insert_at_head(10);
        mylist.print_linkedlist();
        // Inserting an element at the end
        mylist.insert_at_end(30);
        mylist.print_linkedlist();
        // Inserting an eement at given position
        mylist.insert_at_position(2, 20);
        mylist.print_linkedlist();

        return 0;
}
