#include<iostream>
using namespace std;


int main(){

  const int n=7;
  int ans,mid,sum=34,start=0,end=n-1;
  
  int arr[n]={2,4,8,16,19,20,14};

  while(start<end){

 if(arr[start]+arr[end]==sum){
    cout<<"Found "<<arr[start]+arr[end];
    break;
 }else if(arr[start]+arr[end]<sum){
    start++;
 }else{
    end--;
 }

  }

    return 0;
}