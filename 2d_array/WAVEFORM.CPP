#include<iostream>
using namespace std;

int main(){
    int cols=4,rows=4;
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for(int i=0;i<cols;i++){
       
            if(i%2==0){
              for(int j=0;j<rows;j++){
                cout<<arr[i][j];
            }
              cout<<endl;

            }else{
              for(int j=rows-1;j>=0;j--){
                cout<<arr[i][j];
              }
              cout<<endl;
            }
        
    }
}

