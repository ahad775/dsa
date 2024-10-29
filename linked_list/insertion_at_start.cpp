#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

Node *insert(int arr[], int index, int size, Node *prev)
{
    if (index == size)
        return prev;
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev;
    index++;
    return insert(arr, index, size, temp);
}

int main()
{

    const int N = 6;
    int arr[N] = {12, 3, 6, 90, 11, 1};

    Node *Head;
    Head = NULL;
    Head = insert(arr, 0, N, Head);
    cout<<"hey"<<endl;
    Node *temp;
    temp = Head;
   
    for (int i = 0; i < N; i++)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}