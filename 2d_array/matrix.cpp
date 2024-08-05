#include<iostream>
using namespace std;

using namespace std;


int main(){

   const int col=3;
   const int row=3;
   int arr[row][col]={1,2,3,4,5,6,7,8,9};
   for(int i=0;i<row-1;i++){
    for(int j=i+1;j<col;j++){
        swap(arr[i][j],arr[j][i]);
    }
   }


    return 0;
}