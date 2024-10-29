#include<iostream>
using namespace std;


int main(){

char name='a';
char *ptr=&name;
cout<<(void*)ptr<<endl;

int dig=34;
int *ptr2=&dig;
cout<<ptr2;



    return 0;
}