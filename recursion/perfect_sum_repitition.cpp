#include<iostream>
using namespace std;

int subsum(int arr[],int index,int n,int sum){

if(index==n||sum<0){
    return 0;
}
if(sum==0){
    return 1;

}


    return subsum(arr,index+1,n,sum)+subsum(arr,index,n,sum-arr[index]);
}

int main(){

const int n=5;
int arr[n]={3,4,5};
int sub=subsum(arr,0,n,9);


cout<<sub;


    return 0;
}