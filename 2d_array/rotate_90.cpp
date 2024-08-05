#include<iostream>
using namespace std;

int main(){
  const int col=3;
  const int rows=3;


  int index=0;
    int arr[rows][col]={
     1,2,3,
     4,5,6,
     7,8,9
    
    
    };
  for(int i=0;i<rows-1;i++){
    for(int j=i+1;j<col;j++){
   swap(arr[i][j],arr[j][i]);
    }
  }
for(int i=0;i<rows;i++){
int start=0,end=col-1;
while(start<end){
  swap(arr[i][start],arr[i][end]);
  start++,end--;
}
}
for(int i=0;i<rows;i++){
  for(int j=0;j<col;j++){
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}
    return 0;
}