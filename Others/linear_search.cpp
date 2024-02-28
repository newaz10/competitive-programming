#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(int i = 0; i <= 10; i++) {
        cout << linear_search(arr, 10, i) << endl;
    }

    return 0;
}
