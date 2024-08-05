#include<iostream>
using namespace std;

void printEven(int num){
    if(num<=2){
         cout<<num<<" "; 
        return;
    }
    
    printEven(num-2);
    cout<<num<<" "; 
}


int main(){
 printEven(12);
    return 0;
}