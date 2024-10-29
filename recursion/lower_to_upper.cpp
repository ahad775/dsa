#include<iostream>
#include<string>
using namespace std;


void lower_upper(string &s,int index){

if(index==-1) return;
s[index]='A'+s[index]-'a';
lower_upper(s,index-1);

}

int main(){

string a="ahad";
lower_upper(a,a.size()-1);

cout<<a;
    return 0;
}