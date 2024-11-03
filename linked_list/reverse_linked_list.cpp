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





vector <int> reversed;
Node *temp=head;

while (temp!=NULL)

{
reversed.push_back(temp->data);
temp=temp->next;
}


int size=reversed.size()-1;
temp=head;
for (int i=0;i<size;i++)
{
   temp->data=reversed[i];
   temp=temp->next;
}
temp=head;
for (int i=0;i<size;i++)
{
   cout<<temp->data<<endl;
   temp=temp->next;
}


    return 0;
}