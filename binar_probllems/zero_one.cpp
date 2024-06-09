#include<iostream>
using namespace std;


int main(){
   const  int n=6;
   int start=0,end=n-1;
   int arr[n]={1,0,0,1,1,0};
   while (start<end)
   {
   if(arr[start]==0){
    start++;
   }else{
    if(arr[end]==0){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }else{
        end--;
    }

   }
   }
   for (int i = 0; i < n; i++)
   {
 cout<<arr[i]<<"  ";
   }
   


    return 0;
}