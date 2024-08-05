#include <iostream>
using namespace std;

int main()
{

    const int rows = 3;
    const int cols = 3;
    int left = 0, top = 0, right = cols - 1, bottom = rows - 1;
    int arr[rows][cols] = {

        1, 2, 3,
        4, 5, 6
        , 7, 8, 9

    };
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            cout << arr[top][i];
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            cout << arr[i][right];
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << arr[bottom][i];
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << arr[i][left];
            }
            left++;
        }
    }
    return 0;
}