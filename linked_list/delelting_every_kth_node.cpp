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

Node *insert(int arr[], int i, int n, Node *prev)
{
    if (i == n)
        return prev;
    Node *temp = new Node(arr[i]);
    temp->next = prev;
    return insert(arr, i + 1, n, temp);
}

int main()
{

    const int n = 5;
    int arr[n] = {44, 1, 3, 2, 20};
    Node *head = insert(arr, 0, n, NULL);

    int k = 2;
    int count = 1;

    //for leetcode problem
    //   if (count == 1)
    //    return NULL;
    Node *curr = head, *prev = NULL;
    while (curr)
    {
        if (count == k)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
            count = 1;
        }
        else
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
    }


Node *temp;
temp=head;
while (temp)
{
cout<<temp->data<<endl;
temp=temp->next;
}

    return 0;
}