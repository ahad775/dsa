#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->next=NULL;
        this->data=data;
    }
};



int main(){

const int n=5;
int arr[n]={23,49,2,20,1};
Node *head;
head=NULL;
for (int i = 0; i < n; i++)
{

Node *temp;
temp=new Node(arr[i]);
temp->next=head;
head=temp;
}

int x=3;

if (x==1){
    Node *temp;
    temp=head;
    head=head->next;
    delete temp;
}
{
x--;
   Node *prev=NULL,*current=head;
while (x--)
{

prev=current;

current=current->next;



}
prev->next=current->next;

delete current;

}
Node *temp=head;
 while (temp)
    {
  cout<<temp->data<<endl;
  temp=temp->next;
    }
    return 0;
}