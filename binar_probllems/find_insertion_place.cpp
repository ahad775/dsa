#include<iostream>

using namespace std;


int main(){
    int mid;
    const int n=6;
    int start=0,end=n-1,elem=2;

    int arr[n]={ 3,5,6,7,8,10};
    int ans=n;
    while (start<=end)
    {
       mid=(start+end)/2;
       if(arr[mid]>=elem){
        ans=mid;
        end=mid-1;
       }else{
        start=mid+1;
       }
    }
    
    cout<<ans;
    return 0;
}