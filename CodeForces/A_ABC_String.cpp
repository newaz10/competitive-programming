#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    int balance = 0;

    for (char c : s) {
        if (c == '(') balance++;
        else balance--;
        if (balance < 0) return false;
    }

    return balance == 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a;
        cin >> a;

        int n = a.size();
        bool found = false;
        
        for (int mask = 0; mask < 8; mask++) {
            string b = "";

            for (int i = 0; i < n; i++) {
                if (mask & (1 << (a[i] - 'A'))) {
                    b += ')';
                } 
                else {
                    b += '(';
                }
            }
            
            if (isValid(b)) {
                found = true;
                break;
            }
        }
        
        cout << (found ? "YES" : "NO") << '\n';
    }
    return 0;
}