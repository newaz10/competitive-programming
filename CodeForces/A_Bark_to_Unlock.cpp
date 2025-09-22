#include <bits/stdc++.h>
using namespace std;

int main() {
    string pwd;
    cin >> pwd;

    int n;
    cin >> n;

    vector<string> words(n);

    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    for (string w : words) {
        if (w == pwd) {
            cout << "YES" << '\n';
            return 0;
        }
    }

    bool foundStart = false; 
    bool foundEnd = false;   

    for (string w : words) {
        if (w[0] == pwd[1]) foundStart = true;
        if (w[1] == pwd[0]) foundEnd = true;
    }

    if (foundStart && foundEnd) {
        cout << "YES" << '\n';
        return 0;
    }

    cout << "NO" << '\n';

    return 0;
}