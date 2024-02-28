#include <bits/stdc++.h>
using namespace std;

int main()
{
    int key;
    deque <int> d = {0, 1, 2, 3, 7};

    while(cin >> key) {
        deque <int> ::iterator it = find(d.begin(), d.end(), key);

        if(it == d.end()) {
            cout << "Element is not available in the array\n";
        }
        else {
            cout << "Element is available in the " << it - d.begin() << "th index\n";
        }
    }

    return 0;
}


