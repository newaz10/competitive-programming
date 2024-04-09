/// How to write Iterators Code in Short in C++ STL ? | Auto and Range based loops | CP COURSE | EP 24
/// https://youtu.be/xiXMmOSDX3U

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for(auto i: v) {
        cout << i << ' ';
    }
    cout << endl;

    for(auto i = v.begin()+3; i != v.end(); i++) {
        cout << (*i) << ' ';
    }
    cout << endl;

    return 0;
}

