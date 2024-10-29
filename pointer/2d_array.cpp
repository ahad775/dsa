#include<iostream>
using namespace std;


int main(){
    int *n=new int(5);
    int *arr=new int[*n];
    for(int i=1;i<=*n;i++){
        arr[i]=(i*2)+i;
    }
for(int i=1;i<=*n;i++){
        cout<<arr[i]<<endl;
    }

delete[] arr;
    return 0;
}