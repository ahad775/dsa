#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main(){

string str="ccAccbbbe";
vector<int> lower(26,0),upper(26,0);

for(int i=0;i<str.size();i++){
    if(str[i]>='a'){
        int index=str[i]-'a';
        lower[index]++;
    }else{
         int index=str[i]-'A';
        upper[index]++; 
    }
}
int count=0;
bool odd=0;
for(int i=0;i<26;i++){
if(lower[i]%2==0){
count+=lower[i];
}else{
    count+=lower[i]-1;
    odd=1;
}
if(upper[i]%2==0){
count+=upper[i];
}else{
    count+=upper[i]-1;
    odd=1;
}
}
if(odd){
    count++;
}
cout<<count;
    return 0;
}