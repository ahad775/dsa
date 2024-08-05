#include<iostream>
using namespace std;


int main(){
    const int row=3,col=3;
    int arr[row][col]={
        1,2,3,
        4,5,6,
        7,8,9

    };
  
  for(int i=0;i<row-1;i++){
    for(int j=i+1;j<col;j++){
        swap(arr[i][j],arr[j][i]);
    }
  }

  for(int i=0;i<row;i++){
   int start=0,end=row-1;
   while(start<end){
    swap(arr[start][i],arr[end][i]);
    start++,end--;
   }
  }
for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}

    return 0;
}