#include<iostream>
using namespace std;
int main(){

int last=-1,first=-1;
int mid,elem=6;
const int n=6;
int arr[n]={2,3,6,6,6,8};
int start=0,end=n-1;
while(start<=end){
    mid=(end+start)/2;
    if(arr[mid]==elem){
        end=mid-1;
        first=mid;
        
    }else if(arr[mid]>elem){
        end=mid-1;
    }else{
        start=mid+1;
    }
}
start=0;
end=n-1;
while(start<=end){
    mid=(start+end)/2;
    if(arr[mid]==elem){
        start=mid+1;
        last=mid;
    }else if(arr[mid]>elem){
        end=mid-1;
    }else{
        start=mid+1;
    }
}
cout<<"Start is : "<<first<<" End is : "<<last;

return 0;
}