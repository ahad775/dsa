#include<iostream>
#include<iostream>

using namespace std;
int  num(char c){
    if(c=='I') return 1;
    if(c=='V') return 5;
    if(c=='X') return 10;
    if(c=='L') return 50;
    if(c=='C') return 100;
    if(c=='D') return 500;
    if(c=='M') return 1000;
    return -1;
}
int main(){
    
    string Roman="CXCIX";
    int ans=0;

    for(int i=0;i<Roman.size()-1;i++){
  if(num(Roman[i])<num(Roman[i+1])){
    ans-=num(Roman[i]);
  }else{
    ans+=num(Roman[i]);
  }
    }
ans+=num(Roman[Roman.size()-1]);
    cout<<ans;

    return 0;
}