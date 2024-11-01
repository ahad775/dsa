#include<iostream>
#include<vector>
using namespace std;


void subsequence(vector<vector<int> >&ans,vector <int>temp,int index,int arr[],int size){

    if(index==size){
ans.push_back(temp);
return ;
    }

//if choice is not made
subsequence(ans,temp,index+1,arr,size);
temp.push_back(arr[index]);
//if choice is  made

subsequence(ans,temp,index+1,arr,size);

}

int main(){
int n=3;
int arr[n]={1,2,3};

vector<vector< int > >ans;

vector<int>temp;
subsequence(ans,temp,0,arr,n);
for (int i = 0; i < ans.size(); i++)
{
   for (int j = 0; j < ans[i].size(); j++)
{
    cout<<ans[i][j]<<"\t";
}
cout<<endl;
}




    return 0;
}