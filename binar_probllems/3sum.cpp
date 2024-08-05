#include<iostream>
using namespace std;

int main(){
   const int n=6;
   int arr[n]={3,16,8,12,4,5};
   int x=21;
   for(int i=0;i<n-2;i++){
    int start=i+1,end=n-1;
    int ans=x-arr[i];
    while (start<end)
    {
       if(arr[start]+arr[end]==ans){
        
        cout<<"ans"<<endl;
        break;
       }else if(arr[start]+arr[end]<ans){
         start++;
       }else{
        end--;
       }
    }
    
   }
  

    return 0;
}