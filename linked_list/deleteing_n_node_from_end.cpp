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

Node *insert(int arr[], int n, int i)
{
    if (i == n)
        return NULL;
    Node *temp = new Node(arr[i]);
    temp->next = insert(arr, n, i + 1);

    return temp;
}

int main()
{
const int n=5;
int arr[n]={34,54,2,1,20};
Node *head=insert(arr,n,0);
Node *temp=head;
int x=3;
int count=0;
while (temp)
{
  temp=temp->next;
  count++;
}

count-=x;
Node *curr=head,*prev=NULL;
while (count--)
{

    prev=curr;
    curr=curr->next;


}
prev->next=curr->next;
delete curr;
temp=head;
while (temp)
{

    cout<<temp->data<<endl;
    temp=temp->next;
}




return 0;

}