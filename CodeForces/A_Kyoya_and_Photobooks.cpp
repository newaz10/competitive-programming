#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<string> distinct;

    int n = s.size();

    for (int pos = 0; pos <= n; pos++) {
        for (char c = 'a'; c <= 'z'; c++) {
            string temp = s;
            temp.insert(pos, 1, c);
            distinct.insert(temp);
        }
    }

    cout << distinct.size() << '\n';

    return 0;
}