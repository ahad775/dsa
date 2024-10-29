#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
int main()
{

    const int n = 6;
    int arr[n] = {23, 54, 33, 2, 1, 0};

    Node *head;
    head=nullptr;
    for (int i = 0; i < n; i++)
    {
        if (head == nullptr)
        {

            head = new Node(arr[i]);
        }
        else
        {
            Node *temp;
            temp = new Node(arr[i]);
            temp->next = head;
            head = temp;
        }
    }

    int x = 2;
    x--;
    if (head == NULL)
    {
        Node *temp;
        temp = head;
        head = NULL;
        delete temp;
    }
    else
    {
        Node *current = head, *prev = NULL;
        while (current->next != nullptr)
        {

            prev = current;
            current = current->next;
        }
        delete current;
        prev->next = NULL;
    }
    Node *temp2 = head;

    while (temp2)
    {
        cout << temp2->data << endl;
        temp2 = temp2->next;
    }

    return 0;
}