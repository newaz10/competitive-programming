#include <bits/stdc++.h>
using namespace std;

bool beats(const string& a, const string& b) {
    if (a == "rock" && b == "scissors") return true;
    if (a == "scissors" && b == "paper") return true;
    if (a == "paper" && b == "rock") return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string f, m, s;
    if (!(cin >> f >> m >> s)) return 0;
    
    if (beats(f, m) && beats(f, s)) {
        cout << "F\n";
    } else if (beats(m, f) && beats(m, s)) {
        cout << "M\n";
    } else if (beats(s, f) && beats(s, m)) {
        cout << "S\n";
    } else {
        cout << "?\n";
    }
    
    return 0;
}