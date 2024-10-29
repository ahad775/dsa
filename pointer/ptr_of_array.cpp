#include<iostream>
using namespace std;

void change_val(int arr[],int n){

    for(int i=0;i<n;i++){
        arr[i]=arr[i]*2;
    }
}
int main(){

int N=4;
int arr[N]={1,2,3,4};

change_val(arr,N);
 for(int i=0;i<N;i++){
       cout<<arr[i]<<endl;
    }




    return 0;
}