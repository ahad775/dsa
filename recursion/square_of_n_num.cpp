#include<iostream>

using namespace std;

int sum(int num){
if(num==1){
    return 1;
}
return (num*num)+sum(num-1);
}

int main(){

 cout<<sum(5);

    return 0;
}