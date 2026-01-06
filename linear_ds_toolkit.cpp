#include <iostream>
using namespace std;

#define MAX 5

// ---------- STACK ----------
int stackArr[MAX], top = -1;

void push() {
    if (top == MAX - 1) {
        cout << "Stack Overflow!\n";
        return;
    }
    int x;
    cout << "Enter element to push: ";
    cin >> x;
    stackArr[++top] = x;
    cout << "Element pushed successfully.\n";
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow!\n";
        return;
    }
    cout << "Popped element: " << stackArr[top--] << endl;
}

void displayStack() {
    if (top == -1) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--)
        cout << stackArr[i] << " ";
    cout << endl;
}

// ---------- QUEUE ----------
int queueArr[MAX], front = -1, rear = -1;

void enqueue() {
    if (rear == MAX - 1) {
        cout << "Queue Overflow!\n";
        return;
    }
    int x;
    cout << "Enter element to enqueue: ";
    cin >> x;

    if (front == -1) front = 0;
    queueArr[++rear] = x;
    cout << "Element enqueued successfully.\n";
}

void dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow!\n";
        return;
    }
    cout << "Dequeued element: " << queueArr[front++] << endl;
}

void displayQueue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty.\n";
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++)
        cout << queueArr[i] << " ";
    cout << endl;
}

// ---------- MAIN ----------
int main() {
    int choice;

    do {
        cout << "\n--- Linear Data Structures Toolkit ---\n";
        cout << "1. Stack Push\n";
        cout << "2. Stack Pop\n";
        cout << "3. Display Stack\n";
        cout << "4. Enqueue\n";
        cout << "5. Dequeue\n";
        cout << "6. Display Queue\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: displayStack(); break;
            case 4: enqueue(); break;
            case 5: dequeue(); break;
            case 6: displayQueue(); break;
            case 0: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
