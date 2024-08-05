#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main(){

string str="boy4 ahad1 is3 a2";
vector<string> str_ans(10);
string temp;
int count=0;

for(int i=0;i<str.length();i++){
if(str[i]==' '){
int position=temp[temp.size()-1]-'0';
temp.pop_back();
str_ans[position]=temp;
temp.clear();
count++;
}
else{
    temp+=str[i];

}
if(i==str.size()-1){
    int position=temp[temp.size()-1]-'0';
    temp.pop_back();
    str_ans[position]=temp;
    temp.clear();
    count++;
}
}
for(int i=1;i<=count;i++){
  temp+=' ';
  temp+=str_ans[i];
 
}

cout<<temp<<endl;

return 0;
}
 

