#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};

int main(){
    int arr[5]={23,45,6,7,8};
Node *head;
head=NULL;
for (int i = 0; i < 5; i++)
{
if (head==NULL)
{
head=new Node(arr[i]);
}else{
    Node *temp;
    temp=new Node(arr[i]);
    temp->next=head;
    head=temp;
}


}

Node *curr=head,*prev=NULL,*future=NULL;
while (curr)
{
future=curr->next;
curr->next=prev;
prev=curr;
curr=future;
}
head=prev;
Node *temp=head;
for (int i = 0; i < 5; i++)
{
cout<<temp->data<<endl;
temp=temp->next;
}









    return 0;
}