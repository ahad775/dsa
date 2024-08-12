#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
  string s="acdabcdeabcde";
  vector<int> lps(s.size(),0); 
  int prefix=0,sufix=1;
  while(sufix<s.size()){
    if(s[prefix]==s[sufix]){
      lps[sufix]=prefix+1;
      prefix++;
      sufix++;
   
    }else{
      if(prefix==0){
        lps[sufix]=0;
        sufix++;
      }else{
        prefix=lps[prefix-1];
      
      }
    }
  }
cout<<lps.back();

    return 0;
}