#include<iostream>
using namespace std;

int main(){
  const int col=3;
  const int rows=3;

  int max=0,index=-1,sum=0;
  int arr[rows][col]={34,12,1,11,25,60,4,5,6};
  for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
      sum+=arr[i][j];
      
    }
    if(max<sum){
        max=sum;
        index=i;
    }
    sum=0;
  }
  cout<<max<<" "<<index;


    return 0;
}