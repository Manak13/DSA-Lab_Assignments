#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> v;   // dynamic array

public:
    // (i) push
    void push(int value) {
        v.push_back(value);
        cout << value << " pushed into stack." << endl;
    }

    // (ii) pop
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        cout << v.back() << " popped from stack." << endl;
        v.pop_back();
    }

    // (iii) isEmpty
    bool isEmpty() {
        return v.empty();
    }

    // (iv) isFull (vector theoretically kabhi full nahi hota, except memory limit)
    bool isFull() {
        return false;  // vector dynamically grow hota hai
    }

    // (v) display
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = v.size() - 1; i >= 0; i--) {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    // (vi) peek
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element is: " << v.back() << endl;
        }
    }
};

// ---------------------- Menu Driven Program ----------------------
int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n2. Pop\n3. isEmpty\n4. isFull\n5. Display\n6. Peek\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            cout << (s.isEmpty() ? "Stack is Empty." : "Stack is not Empty.") << endl;
            break;
            
        case 4:
            cout << (s.isFull() ? "Stack is Full." : "Stack is not Full.") << endl;
            break;
        case 5:
            s.display();
            break;
        case 6:
            s.peek();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}
