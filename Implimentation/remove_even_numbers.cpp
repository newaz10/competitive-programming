#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque <int> d = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    cout << "Vector before erase: ";
    for(int i = 0; i < d.size(); i++) {
        cout << d[i] << ' ';
    }
    cout << '\n';

    for(int i = 0; i < d.size(); i++) {
        if(d[i]%2 == 0) {
            d.erase(d.begin()+i);
        }
    }

    cout << "Vector after erase: ";
    for(int i = 0; i < d.size(); i++) {
        cout << d[i] << ' ';
    }
    cout << '\n';

    return 0;
}
