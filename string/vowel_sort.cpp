#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){


string vowel="ecaAue";


vector <int> lower(26,0);
vector <int> upper(26,0);
 for(int i=0;i<vowel.size();i++){
   if(vowel[i]=='a'||vowel[i]=='e'||vowel[i]=='i'||vowel[i]=='o'||vowel[i]=='u'){
  
    int index=vowel[i]-'a';
    cout<<index<<endl;
    lower[index]++;
  
      vowel[i]='#';
   }
    if(vowel[i]=='A'||vowel[i]=='E'||vowel[i]=='I'||vowel[i]=='O'||vowel[i]=='U'){
    

    int index=vowel[i]-'A';
    cout<<index<<"    index   "<<endl;
    upper[index]++;
      vowel[i]='#';

   }
 }

 string ans="";
 for(int i=0;i<26;i++){
    char c='A'+i;
   
    while(upper[i]){
         cout<<c<<"____"<<endl;
        ans+=c;
        upper[i]--;
    }
 }
for(int i=0;i<26;i++){
    char c='a'+i;
    while(lower[i]){
        ans+=c;
        lower[i]--;
    }
 }
cout<<ans<<endl;
 int ans_index=0,str_index=0;
 while(ans_index<ans.size()){
    if(vowel[str_index]=='#'){
        vowel[str_index]=ans[ans_index];
        ans_index++;
    }
    str_index++;
 }
 cout<<vowel;
    return 0;
}