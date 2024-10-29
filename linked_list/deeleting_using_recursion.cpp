#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        this->data=val;
        next=NULL;
    }
};

Node* del(Node *curr,int x){
    if(x==1){
        Node *temp;
        temp=curr->next;
        delete curr;
        return temp;
    }

    curr->next=del(curr->next,x-1);
    return curr;
}

int main(){
const int n=5;

Node *Head=NULL;
int arr[n]={12,34,56,9,12};

for (int i = 0; i < n; i++)
{
    if (Head==NULL)
    {


Head=new Node(arr[i]);

    }else{
        Node *temp;
        temp=new Node(arr[i]);
        temp->next=Head;
        Head=temp;
    }
    


}
Head=del(Head,3);
  Node *temp=Head;
  while (temp)

  
  {

  cout<<temp->data<<endl;
  temp=temp->next;

  }

    return 0;
}