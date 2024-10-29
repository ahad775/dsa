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


if (Head!=NULL)

{

Node *temp;
temp=Head;
Head=Head->next;
delete temp;

}
cout<<Head->data;


    return 0;
}