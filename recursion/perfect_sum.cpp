#include<iostream>
using namespace std;

int targetSum(int arr[],int sum,int index,int size){

    if(index==size){

return sum==0;

    }
    if (sum==0)
    {
return 1;
    }

    return targetSum(arr,sum,index+1,size)+targetSum(arr,sum-arr[index],index+1,size);
    
}

int main(){



return 0;
}    