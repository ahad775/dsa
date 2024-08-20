#include<iostream>
using namespace std;


int main(){

int arr[5]={1,2,3,4,5};

for(int i=0;i<5;i++){
   cout<<arr+i<<"  address of "<<i<<"th element"<<endl; 
   cout<<*(arr+i)<<"  value of "<<i<<"th element"<<endl; 
} 
int *ptr=arr;
for(int i=0;i<5;i++){
cout<<*(ptr+i)<<endl;
}
for(int i=0;i<5;i++){
cout<<ptr[i]<<endl;
}


   return 0;
}
