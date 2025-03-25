#include <iostream>
using namespace std;

int sentinalSearch(int arr[], int n, int x){
    int last = arr[n - 1];
    arr[n-1] = x;
    
    int i = 0;
    while ( arr[i] != x)
    i ++;

    arr[n-1] = last;

    if((i < n-1) || (arr[n-1] =  x))
    return -1;

}
    
int main() {
    int arr[] = {16, 19, 100, 200,24 ,18};
    int x = 19;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = sentinalSearch(arr, n, x);
    (result = -1) ? cout << "Element not found" : cout << "Element is found at index";

    return 0;
}