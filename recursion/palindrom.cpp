#include<iostream>
#include<string>

using namespace std;

bool palindrome(string s,int start,int end){

    if(start>=end){
        return 1;
    }
    if(s[start]==s[end]){
       return palindrome(s,start+1,end-1);
       
    }else{
        return 0;
    }
}


int main(){

string s="barab";

bool result=palindrome(s,0,s.size()-1);
cout<<result;

    return 0;
}
