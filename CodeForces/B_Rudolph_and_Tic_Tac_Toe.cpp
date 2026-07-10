#include <bits/stdc++.h>
using namespace std;

bool check_line(char a, char b, char c) {
    return (a == b && b == c && a != '.');
}

void solve() {
    vector<string> board(3);

    for (int i = 0; i < 3; i++) {
        cin >> board[i];
    }
    
    for (int i = 0; i < 3; i++) {
        if (check_line(board[i][0], board[i][1], board[i][2])) {
            cout << board[i][0] << "\n";
            return;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        if (check_line(board[0][i], board[1][i], board[2][i])) {
            cout << board[0][i] << "\n";
            return;
        }
    }
    
    if (check_line(board[0][0], board[1][1], board[2][2])) {
        cout << board[0][0] << "\n";
        return;
    }
    
    if (check_line(board[0][2], board[1][1], board[2][0])) {
        cout << board[0][2] << "\n";
        return;
    }
    
    cout << "DRAW\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}