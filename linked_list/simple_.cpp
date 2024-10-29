#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        this->data=val;
        next=NULL;
    }
};

int main(){
Node *Head;
Head=NULL;
for(int i=1;i<=10;i++){
if(Head==NULL){
    Head=new Node((i*2));
    
}
else{
    Node *temp;
    temp=new Node((i*2));
    temp->next=Head;
    Head=temp;
}
}


Node *temp=Head;
while (temp)
{
    cout<<temp->data<<endl;
    temp=temp->next;
    /* code */
}


return 0;

}