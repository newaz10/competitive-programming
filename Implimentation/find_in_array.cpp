#include <bits/stdc++.h>
using namespace std;

int main()
{
    int key, n = 11;
    int arr[n] = {1, 3, 2, 5, 4, 6, 8, 9, 33, 15, 19};

    while(cin >> key) {
        int *ptr = find(arr, arr+n, key);

        if(ptr == (arr+n)) {
            cout << "Element is not available in the array\n";
        }
        else {
            cout << "Element is available in the " << ptr - arr << "th index\n";
        }
    }

    return 0;
}

