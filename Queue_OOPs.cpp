#include <iostream>
#include <vector>
using namespace std;

// Queue class definition
class Queue {
private:
    vector<int> data;  // vector to store queue elements

public:
    // Method to check if the queue is empty
    bool isEmpty() {
        return data.empty();
    }

    // Method to add an element to the back of the queue
    void enqueue(int value) {
        data.push_back(value);  // add element at the end
        cout << value << " enqueued to the queue\n";
    }

    // Method to remove an element from the front of the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue.\n";
        } else {
            cout << data.front() << " dequeued from the queue\n";
            data.erase(data.begin());  // remove element from the front
        }
    }

    // Method to get the front element of the queue
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return -1;  // or throw an exception
        }
        return data.front();
    }

    // Method to display the contents of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
        } else {
            cout << "Queue contents: ";
            for (int i : data) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

// Driver code to test the Queue class
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();  // Queue contents: 10 20 30

    cout << "Front element: " << q.front() << endl;  // Front element: 10

    q.dequeue();  // 10 dequeued from the queue
    q.display();  // Queue contents: 20 30

    q.dequeue();  // 20 dequeued from the queue
    q.display();  // Queue contents: 30

    q.dequeue();  // 30 dequeued from the queue
    q.display();  // Queue is empty

    return 0;
}
