#include<iostream>
#include<vector>
using namespace std;


int partition(int arr[],int start,int end){

  int pos=start;
  int pivot=arr[end];
  for (int i = start; i < end; i++)

  {
if(arr[i]<=pivot){
    swap(arr[i],arr[pos++]);
}


  }
  
swap(arr[pos], arr[end]);
return pos;

}

void quickSort(int arr[],int start,int end){
    if(start>=end) return;
int pivot=partition(arr,start,end);
quickSort(arr,start,pivot-1);
quickSort(arr,pivot+1,end);

}


int main(){

const int  N=7;
int arr[N]={23,6,40,3,80,71,1};

quickSort(arr,0,N-1);
for (int i = 0; i < N; i++)

{
cout<<arr[i]<<endl;

}




    return 0;
}