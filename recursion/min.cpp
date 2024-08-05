#include <iostream>

using namespace std;

int min(int arr[], int minElem, int index, int n) {
    if (index == n) {
        return minElem;
    }
    if (arr[index] < minElem) {
        minElem = arr[index];
    }
    return min(arr, minElem, index + 1, n);
}

int main() {
    const int n = 6;
    int arr[n] = {23, 3, 56, 1, 0, 10};
    cout << min(arr, arr[0], 1, n);  // Start with arr[0] as the initial minimum and index 1
    return 0;
}
