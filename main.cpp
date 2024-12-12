/// ** In the name of ALLAH ** ///

#include <iostream>
using namespace std;

#define N 5
int queue[N];
int front = -1, rear = -1;

void enqueue(int item) {
    if (rear == N - 1) {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (front == -1 && rear == -1) {
        front = 0;
        rear = 0;
    } else {
        rear++;
    }
    queue[rear] = item;
}

void dequeue() {
    if (front == -1 && rear == -1) {
        cout << "Queue is Empty" << endl;
    } else if (front == rear) {
        cout << "Dequeued item is: " << queue[front] << endl;
        front = -1;
        rear = -1;
    } else {
        cout << "Dequeued item is: " << queue[front] << endl;
        front++;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << ' ';
        }
        cout << endl;
    }
}

void peek() {
    if (front == -1 && rear == -1) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Front item is: " << queue[front] << endl;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    peek();

    enqueue(60);

    dequeue();
    display();
    peek();

    return 0;
}
