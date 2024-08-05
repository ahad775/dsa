#include <iostream>
using namespace std;

int main()
{

    const int n = 6;
    int start = 1;
    int arr[n] = {23, 5, 2, 1, 16, 15};
    int k=0;
    while (k < n)
    {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i <= start; i++)
        {
            sum1 += arr[i];
        }
       
        for (int i = start + 1; i < n; i++)
        {
            sum2 += arr[i];
        }
      

        if (sum1 == sum2)
        {
            cout << "Yes";
            break;
        }
        else 
        {
           
            start++;
        }
      
       k++;

    }

    return 0;
}