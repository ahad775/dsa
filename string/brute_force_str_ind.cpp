#include <iostream>
#include <string>

using namespace std;

int main()
{

    string hype = "hahaddada";
    string nidle = "ahad";

    int n = hype.size(), m = nidle.size();

    for (int i = 0; i < n - m; i++)
    {
        int first = i, second = 0;


        while (second < m)
        {
            if (hype[first] != nidle[second])
            {
                break;
            }
            else
            {
                second++, first++;
            }
        }
 
        if (second == m)
        {
            cout << first - second<<"  Met ";
            
        }
    }

    return 0;
}