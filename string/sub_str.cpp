#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){


string s="abcaefg";

int first=0,second=0;
vector<bool> count(256,0);
int length=0;
while(second<s.size()){
    while (count[s[second]])
    {
   count[s[first]]=0;
    first++;
    }
    count[s[second]]=1;
    length=max(length,second-first+1);
    second++;
    
}
cout<<length;

    return 0;
}