#include<iostream>
#include<string>
using namespace std;
void clockwise(string &str){
    int index= str.size()-1;
        char c=str[index] ;

   while(index>=0){
    str[index+1]=str[index];
    index--;
   }
    str[0]=c;
    cout<<str<<endl;

}

void anticlockwise(string &str){
    int index = 1;
    char c= str[0];
    while(index<str.size()){
        str[index-1]=str[index];
        index++;
    }
    str[0]=c;
    cout<<str<<endl;

}

using namespace std;

int main(){
string str1="happy";
string str2="pyhap";
clockwise(str1);
clockwise(str1);
if(str1==str2) cout<<"yes";
    else {
        
        cout<<"no";
 }

    return 0;
}