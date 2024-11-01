#include<iostream>
#include<vector>
using namespace std;

void printsum(int index,int sum,int arr[],int size){
    if(index==size) {
        cout<<sum<<endl;
        return ;
    }
printsum(index+1,sum,arr,size);
printsum(index+1,sum+arr[index],arr,size);

}

int main(){
int n=3;
int arr[n]={2,3,4};

printsum(0,0,arr,n);
    return 0;
}