#include<iostream>
using namespace std;



int main(){
 const int n=6;
 int arr[n]={2,4,5,2,1,3};
 for(int i=0;i<n;i++){
    arr[i]--;
 }
 for(int i=0;i<n;i++){
  arr[arr[i]%n]+=n;
 }
 for(int i=0;i<n;i++){
    if(arr[i]/n==2){
        cout<<arr[i+1];
    }
    if (arr[i]/n==0)
    {
        cout<<i++;
    }
    
 }
    return 0;
}