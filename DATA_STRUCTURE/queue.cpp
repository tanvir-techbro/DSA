#include <iostream>
#include <queue>
using namespace std;

/*
 * Queues = FIFO data structure. First in firsst out.
 *          A collection designed for holding elements prior to processing.
 *          Liner data structure.
 */

int main(int argc, char *argv[]) {

        queue<int> qu;

        // pushes a value at the end.
        qu.push(10);
        // Checking if the queue is empty or not.
        if (qu.empty()) {
                cout << "The queue is empty." << endl;
        } else {
                cout << "The queue is not empty." << endl;
        }

        return 0;
}
