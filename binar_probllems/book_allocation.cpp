#include<iostream>
using namespace std;


int main(){
   const int n=6;
   int start=0,end=0,mid,ans=-1,k=2; 
   int arr[n]={12,34,56,4,16,18};
   for(int i=0;i<n;i++){
    if(arr[i]>start){
        start=arr[i];
    }
    end+=arr[i];
   }

   while(start<=end){
    mid=start+(end-start)/2;
    int count=1;
    int pages=arr[0];
    for(int i=0;i<n;i++){
        pages+=arr[i];
        if(pages>mid){
            count++;
            pages=arr[i];
        }
    }
    if(count>=k){
        end=mid-1;
        ans=mid;
    }else{
        start=mid+1;
    }
   }

    cout<<ans;
   return 0;
}