#include <bits/stdc++.h>
using namespace std;

int main()
{
    ///3 ways of using pair!

    pair <string, int> p1;
    p1.first = "Newaz";
    p1.second = 99;

    pair <string, int> p2("Kamrul", 100);

    pair <string, int> p3;
    p3 = make_pair("Mehedi", 97);

    cout << p1.first << ' ' << p1.second << '\n';
    cout << p2.first << ' ' << p2.second << '\n';
    cout << p3.first << ' ' << p3.second << '\n';
    cout << '\n';

    swap(p1, p3);
    cout << p1.first << ' ' << p1.second << '\n';
    cout << p2.first << ' ' << p2.second << '\n';
    cout << p3.first << ' ' << p3.second << '\n';
    swap(p1, p3);
    cout << '\n';

    swap(p1.second, p3.second);
    cout << p1.first << ' ' << p1.second << '\n';
    cout << p2.first << ' ' << p2.second << '\n';
    cout << p3.first << ' ' << p3.second << '\n';
    cout << '\n';

    return 0;
}
