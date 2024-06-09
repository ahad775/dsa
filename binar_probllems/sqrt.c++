#include<iostream>
using namespace std;



int main(){
 const int n=6;
 int ans=n,mid,start=0,end=n-1,elem=169;

 int arr[n]={2,4,7,10,12,15};
cout<<"checked"<<endl;
while(start<=end){
    mid=(start+end)/2;
    if(arr[mid]*arr[mid]==elem){
        
        ans=mid;
        break;
    }else if(arr[mid]*arr[mid]>elem){
        ans=mid;
        end=mid-1;
    }else{
        start=mid+1;
    }
}

cout<<"Ans is : "<<ans;
    return 0;
}