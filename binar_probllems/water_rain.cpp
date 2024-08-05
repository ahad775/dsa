#include <iostream>
using namespace std;
int main()
{
    const int n = 6;
    int arr[n] = {3, 0, 6, 4, 5, 1};
    int max = 0,index=0,maxleft=0,maxright=0,sum=0;
    for (int i = 0; i < n; i++)
    {
    if(arr[i]>max){
        max=arr[i];
        index=i;
    }
        
    }
    for(int i=0;i<index;i++){
       if(arr[i]>max){
        sum+=arr[i];
       }else{
        maxleft=arr[i];
       }
    }
    for(int i=n-1;i>index;i--){
        if(arr[i]>maxright){
            sum+=arr[i];
        }else{
            maxright=arr[i];
        }
    }

cout<<sum;
   
    return 0;
}