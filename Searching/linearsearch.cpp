#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x){
    for(int i = 0 ; i <n; i ++){
        if (arr[i] = x)
        return 1;

    }
    return -1;
}
int main() {
    int arr[] = {16, 19, 100, 200,24 ,18};
    int x = 19;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, n, x);
    (result = -1) ? cout << "Element not found" : cout << "Element is found at index";

    return 0;
}