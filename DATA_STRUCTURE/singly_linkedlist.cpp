#include <cstddef>
#include <iostream>
using namespace std;

/*
 * Linked list = A liner data structure where data is not stored in contigeous memory.
 * Instead there is nodes pointing to the next node.
 */

// Singly linked list
template <typename T>
struct node {
        T data;     // Data savd in the current node.
        node *next; // Pointer to the next node.

        node(T value) {
                data = value;
                next = NULL;
        }
};
template <typename T>
class linkedlist {
      public:
        node<T> *head;

        // Constructor to point the head to NULL by default
        linkedlist() {
                head = NULL;
        }
        // Prints the linked list
        void print_linkedlist() {
                node<T> *temp = head;
                while (temp != NULL) {
                        cout << temp->data << " -> ";
                        temp = temp->next;
                }
                cout << "NULL" << endl;
        }

        // Crating a new head.
        void insert_at_head(T data) {
                if (head == NULL) {
                        head = new node(data);
                        return;
                }

                node<T> *newhead = new node(data);
                head = newhead;
                delete head;
        }
        // Deleting the head
        void delete_at_head() {
                if (head == NULL) {
                        cout << "Error: No nodes to delete." << endl;
                        return;
                }

                node<T> *temp = head;
                head = head->next;
                delete temp;
        }

        // Adding a node at the end of the linked list
        void insert_at_end(T data) {
                if (head == NULL) {
                        insert_at_head(data);
                        return;
                }

                node<T> *newNode = new node(data);
        }
};

int main(int argc, char *argv[]) {

        linkedlist<int> mylist;

        mylist.delete_at_head();
        mylist.print_linkedlist();
        // Inserting a new element at the head
        mylist.insert_at_head(10);
        mylist.print_linkedlist();
        mylist.delete_at_head();
        mylist.print_linkedlist();
        //  Inserting an element at the end
        // mylist.insert_at_end(30);
        // mylist.print_linkedlist();
        // Inserting an eement at given position
        // mylist.insert_at_position(2, 20);
        // mylist.print_linkedlist();
        // mylist.delete_at_end();
        // mylist.print_linkedlist();

        // mylist.insert_at_end(40);
        // mylist.insert_at_head(10);
        // mylist.insert_at_position(2, 20);
        // mylist.print_linkedlist();

        // mylist.delete_at_position(2);
        // mylist.print_linkedlist();

        // mylist.delete_at_position(3);
        // mylist.print_linkedlist();

        return 0;
}
