#include<iostream>
using namespace std;


int main(){

const int n=6;
int ans,totalsum=0;
int arr[n]={30,5,6,17,14,10};
for (int i = 0; i < n; i++)
{
   totalsum+=arr[i];
}

 int prefix=0;
for (int i = 0; i < n-1; i++)
{
    prefix+=arr[i];
  ans=totalsum-prefix;
  if(ans==prefix) cout<<"yes";
}


return 0;
}