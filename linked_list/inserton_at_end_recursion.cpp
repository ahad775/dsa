#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }

};

Node *createLinkedList(int size,int arr[],int index){
if(size ==index) return NULL;
Node *temp;
temp=new Node(arr[index]);
index++;
temp->next=createLinkedList(size,arr,index);
return temp;






}



int main(){


   const int n=5;
   int arr[n]={12,30,8,40,20};
   Node *Head=createLinkedList(n,arr,0);
   Node *temp=Head;
  for (int i = 0; i < n; i++)

  {

  cout<<temp->data<<endl;
  temp=temp->next;

  }
  
delete temp;
delete Head;


    return 0;
}