#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n-1, mid;

    while(left <= right) {
        mid = (left + right)/2;

        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i <= 10; i++) {
        cout << binarySearch(arr, 10, i) << endl;
    }

    return 0;
}
