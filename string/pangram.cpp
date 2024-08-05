#include<iostream>
using namespace std;

#include<string>
#include<vector>

int main(){
string sentence="higjklmnopqrstuvwxyzabcdefg";
vector<bool> alpha(26,0);

int i=0;
while(i<sentence.size()){
int index=sentence[i]-'a';
alpha[index]=1;

i++;

}

for(int i=0;i<26;i++){
if(alpha[i]==0){
    cout<<"not pangram";
 break;
}


}


    return 0;
}