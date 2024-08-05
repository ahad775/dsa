#include<iostream>
using namespace std;

int main(){

   const int n=5;
   int height[n]={6,4,8,0,6};
   int leftmax=0,rightmax=0,index=0,maxheight=0,water=0;
 //finding maximum height
  for(int i=1;i<n;i++){
    if(height[i]>maxheight){
        index=i;
        maxheight=height[i];
    }
  }
//left part to find the answer
for(int i=0;i<index;i++){
    if(leftmax>height[i]){
  water+=leftmax-height[i];
    }else{
        leftmax=height[i];
    }
}
  
//for right part
for(int i=n-1;i>index;i--){
    if(rightmax>height[i]){
   water+=rightmax-height[i];
    }else{
        rightmax=height[i];
    }
}
cout<<water;
    return 0;
}