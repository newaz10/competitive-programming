#include <bits/stdc++.h>
using namespace std;

char pasture[505][505];

int main() {
    int R, C;
    cin >> R >> C;

    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            cin >> pasture[r][c];
            if (pasture[r][c] == '.') {
                pasture[r][c] = 'D'; 
            }
        }
    }

    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            if (pasture[r][c] == 'W') {
                if (r > 0 && pasture[r-1][c] == 'S') { cout << "No" << endl; return 0; }
                if (r < R-1 && pasture[r+1][c] == 'S') { cout << "No" << endl; return 0; }
                if (c > 0 && pasture[r][c-1] == 'S') { cout << "No" << endl; return 0; }
                if (c < C-1 && pasture[r][c+1] == 'S') { cout << "No" << endl; return 0; }
            }
        }
    }

    cout << "Yes" << endl;
    for (int r = 0; r < R; ++r) {
        for (int c = 0; c < C; ++c) {
            cout << pasture[r][c];
        }
        cout << endl;
    }

    return 0;
}