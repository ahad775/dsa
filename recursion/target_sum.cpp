#include<iostream>
using namespace std;
bool find(int n,int index,int target, int arr[]){


if(target==0){
    return 1;
}


if(target<0||index==n){
    return 1;
}

return find(n,index+1,target,arr)||find(n,index+1,target-arr[index],arr);

}

int main(){

return 0;
}