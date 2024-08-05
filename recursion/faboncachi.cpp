#include<iostream>
using namespace std;

int printEven(int num){
   
   if(num<=1){
  return num;
   }
   
  
  
   return printEven(num-1) + printEven(num-2);  // printing even numbers
   
   
   
 
}


int main(){
 cout<<printEven(9);
    return 0;
}