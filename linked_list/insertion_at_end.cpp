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

int main()
{

    Node *Head, *Tail;
    Head = NULL;
    Tail = NULL;
    int arr[5] = {23, 45, 2, 10, 1};
    for (int i = 0; i < 5; i++)

    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else
        {
          
                Tail->next = new Node(arr[i]);
                Tail=Tail->next;

            
        }
    }

    Node *temp=Head;
    while (temp)
    {
  cout<<temp->data<<endl;
  temp=temp->next;
    }
    
delete temp;
delete Head;
delete Tail;
    return 0;
}