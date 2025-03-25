#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) { // Fixed the condition by removing the extra space
        int mid = (low + high) / 2;
        if (arr[mid] == x) { // Corrected the comparison
            return mid;
        }
        if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {16, 19, 100, 200, 24, 18};
    int x = 19;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, x); 

    if (result == -1) { // Fixed the comparison for the result
        cout << "Element not found" << endl;
    } else {
        cout << "Element is found at index " << result << endl;
    }

    return 0;
}
