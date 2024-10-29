#include <iostream>
#include <string>

using namespace std;

int add(string num1, string num2)
{
}

int main()
{
    string num1 = "23458";
    string num2 = "123";
    int index1 = num1.size() - 1;
    int index2 = num2.size() - 1;

    string ans;
    int carry = 0, sum = 0;
    while (index2 >= 0)
    {
        cout << index2 << endl;
        sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;

        ans += c;
        index1--;
        index2--;
    }
    while (
        index1 >= 0)
    {
        sum = (num1[index1] - '0') + carry;
        carry = sum / 10;
        char c = '0' + sum % 10;
        index1--;
        ans += c;
    }
    cout << ans << endl;
    if (carry != 0)
    {

        ans += '1';
    }
    int start = 0, end = ans.size() - 1;
    while (start <= end)
    {
        swap(ans[start], ans[end]);
        start++, end--;
    }

    cout << ans;
}