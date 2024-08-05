#include<iostream>
using namespace std;

using namespace std;


int main(){

   const int col=3;
   const int row=3;
   int arr[row][col]={1,2,3,4,5,6,7,8,9};
   for(int i=0;i<row-1;i++){
    cout<<i;
    bool is_found=0;
    if(is_found){
        break;
    }
    int start=0,end=col-1,mid,x=5;
    while (start<end)
    {
        mid=(start+end)/2;
        if(arr[i][mid]==x){
            cout<<"found";
            is_found=1;
            break;
        }else if(arr[i][mid]>x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    
   }


    return 0;
}