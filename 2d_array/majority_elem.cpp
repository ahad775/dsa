#include<iostream>
using namespace std;


int main(){

    const int n=6;
    int arr[n]={2,3,2,2,1,2};
    int count=0,candidate=0;
    for(int i=0;i<n;i++){
        if(count==0){
            count++;
            candidate=arr[i];
        }else{
            if(arr[i]==candidate){
                count++;
            }else{
                count--;
            }
        }
    }
count=0;
for(int i=0;i<n;i++){
    if(arr[i]==candidate){
        count++;
    }
}
if(count>n/2){
cout<<candidate;
 
}
    

    return 0;
}