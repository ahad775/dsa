#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

int main() {
    const int N = 6;
    int arr[N] = {23, 45, 67, 89, 12, 32};

    Node* Head = nullptr;

    // Building the initial linked list
    for (int i = 0; i < N; i++) {
        Node* temp = new Node(arr[i]);
        temp->next = Head;
        Head = temp;
    }

    int value = 100;
    int position = N;

    // Insert at specified position
    if (position == 0) {
        Node* newNode = new Node(value);
        newNode->next = Head;
        Head = newNode;
    } else {
        Node* temp = Head;
        for (int i = 1; i < position && temp->next != nullptr; i++) {
            cout<<temp->next<<endl;
            temp = temp->next;
        }

        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Print the linked list
    Node* temp3 = Head;
    while (temp3 != nullptr) {
        cout << temp3->data << endl;
        temp3 = temp3->next;
    }

    return 0;
}
