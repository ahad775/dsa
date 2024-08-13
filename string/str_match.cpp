#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    string haystake = "howisahaddon";
    string needle = "ahad";
    vector<int> count(needle.size(), 0);
    int suffix = 1, prefix = 0;

    while (suffix < needle.size())
    {
        if (needle[suffix] == needle[prefix])
        {
            count[suffix] = prefix + 1;
            suffix++, prefix++;
        }
        else
        {
            if (prefix == 0)
            {
                count[suffix] = 0;
                suffix++;
            }
            else
            {
                prefix = count[prefix - 1];
            }
        }
    }

      int first=0,second=0,ans=0,m=haystake.size(),n=needle.size();
      while (second<n&&first<m){
        if(needle[second]==haystake[first]){
            second++,first++;
        }else{
            if(second==0){
                first++;
            }else{
                second=count[second-1];
            }
        }
      }
     
     cout<<first-second;
      
     
  



    return 0;
}