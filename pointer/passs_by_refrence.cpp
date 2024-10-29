#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}


int main(){




int n1=10;
int n2=20;
cout<<"value of n1 before calling func : "<<n1 <<endl;
cout<<"value of n2 before calling func : "<<n2 <<endl;
swap(n1,n2);
cout<<"value of n1 after calling func : "<<n1 <<endl;
cout<<"value of n2 after calling func : "<<n2 <<endl;
    return 0;
}