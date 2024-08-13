#include<iostream>

#include<vector>

using namespace std;


int main(){

  vector <int> ans(1,1);
  int N=6;
  while(N>=1){
    int carry=0,result=1;
    int size=ans.size();
    for (int i=0;i<size;i++){
        result=(ans[i]*N)+carry;
        carry=result/10;
        ans[i]=result%10;

    }
    while(carry){
        ans.push_back(carry%10);
        carry/=10;

    }
    N--;
  }


int start=0,end=ans.size()-1;
while (start<=end)
{
    swap(ans[start],ans[end]);
    start++,end--;
}


for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i];
}


    return 0;
}
