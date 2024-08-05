#include<iostream>
using namespace std;



int main(){
  const int rows=3;
  const int cols=3;
  int arr[rows][cols]={1,2,3,4,5,6,7,8,9};
  int sum1=0,sum2=0;

  for (int i = 0; i < rows; i++)
  {
    sum1+=arr[i][i];
    sum2+=arr[rows-i][rows-1];
  }
  
cout<<sum1<<" "<<sum2;

    return 0;
}