#include<iostream>
using namespace  std;



class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        this->data=val;
        this->next=NULL;

    }
};



Node* reverse(Node *curr,Node *prev){

    if(curr=NULL){
        return prev;
    }
    Node *future=curr->next;
    

curr->next=prev;

    return reverse(future,curr);
    
}

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










    return 0;
}