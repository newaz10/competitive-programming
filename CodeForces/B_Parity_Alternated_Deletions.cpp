#include <bits/stdc++.h>
using namespace std;

long long simulate(vector<int> odds, vector<int> evens, int start_parity) {
    long long deleted = 0;
    int i = 0, j = 0; 
    int turn = start_parity; 

    while (true) {
        if (turn == 1) {
            if (i < (int)odds.size()) {
                deleted += odds[i];
                i++;
            } 
            else {
                break;
            }
        } 
        else {
            if (j < (int)evens.size()) {
                deleted += evens[j];
                j++;
            } 
            else {
                break;
            }
        }

        turn = 1 - turn;
    }

    return deleted;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    vector<int> odds, evens;

    for (int x : a) {
        if (x % 2 == 1) odds.push_back(x);
        else evens.push_back(x);
    }

    sort(odds.rbegin(), odds.rend());
    sort(evens.rbegin(), evens.rend());

    long long del1 = simulate(odds, evens, 1); 
    long long del2 = simulate(odds, evens, 0); 

    long long max_deleted = max(del1, del2);
    cout << total - max_deleted << '\n';

    return 0;
}