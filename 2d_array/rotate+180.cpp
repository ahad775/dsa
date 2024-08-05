#include<iostream>
using namespace std;


int main(){
  const int row=4;
  const int col=4;

  int arr[row][col]={
    1,2,3,4,
    5,6,7,8,
    9,10,11,12,
    13,14,15,16
  };
 int start=0,end=row-1;
while (start<end)
{
   for(int j=0;j<col;j++){
    swap(arr[start][j],arr[end][j]);

   }
   
   start++,end--;
}
for(int i=0;i<row;i++){
    int start=0,end=col-1;
    while(start<end){
        swap(arr[i][start],arr[i][end]);
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