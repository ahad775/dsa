 #include<iostream>
 #include<vector>

using namespace std;


void merge(int arr[],int start,int mid,int end){

int index=0;
int left=start;
int right=mid+1;
vector<int> temp(end-start+1);
while(left<=mid&&right<=end)
{
if(arr[left]<=arr[right]){
temp[index]=arr[left];
index++;
left++;
}else{
    temp[index]=arr[right];
    index++;
    right++;
}
}


//if there are elements present on the left side
while (left<=mid)
{
temp[index]=arr[left];
index++;
left++;
}

//if there are elements present on the right side
while (right<=end)
{
temp[index]=arr[right];
index++;
right++;
}

//to insert element in the array
index=0;
while(start<=end){
    arr[start]=temp[index];
    start++,index++;
}



};


void mergesort(int arr[],int start,int end){
    if(start==end) return ;

  int  mid=start + (end - start) / 2;

  mergesort(arr,start,mid);
  mergesort(arr,mid+1,end);

  merge(arr,start,mid,end);


}


int main (){


const int N=9;


int arr[N]={23,1,17,80,44,90,11,87,71};
mergesort(arr,0,N-1);
cout<<"hey";
  for (int i = 0; i < N; i++)
  {
cout<<arr[i]<<endl;

  }

    return 0;
}