#include<iostream>
using namespace std;
int main(){
  

   const int n=7;
   int mid,start=0,end=1,target=34;
   int arr[n]={12,46,6,7,8,50,3};
   for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
   }

   for(int i=0;i<n;i++){
    cout<<arr[i]<<"  "<<endl;
   }

  while(end<n){
    if(arr[end]-arr[start]==target){
        cout<<"Starting element is "<<arr[start]<<" End is "<<arr[end];
        break;
    }else if(arr[end]-arr[start]<target){
  end++;
    }else{
        start++;
    }
  }
  
    return 0;
}