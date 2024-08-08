#include <iostream>
#include <string>
using namespace std;

string intToRoman(int num) {
    // Define the mapping of integer values to their corresponding Roman numeral representations
    string M[] = {"", "M", "MM", "MMM"};
    string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    
    // Construct the Roman numeral by combining the appropriate representations
    string thousands = M[num / 1000];
    string hundreds = C[(num % 1000) / 100];
    string tens = X[(num % 100) / 10];
    string ones = I[num % 10];
    
    return thousands + hundreds + tens + ones;
}

int main() {
    int num=2345;
    cout << "Enter an integer: ";
   
    
    if(num <= 0 || num > 3999) {
        cout << "Invalid number! Enter a number between 1 and 3999." << endl;
    } else {
        string roman = intToRoman(num);
        cout << "The Roman numeral for " << num << " is " << roman << endl;
    }

    return 0;
}
