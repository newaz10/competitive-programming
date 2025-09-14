#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int total = accumulate(coins.begin(), coins.end(), 0);
    sort(coins.rbegin(), coins.rend()); // descending order

    int current_sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        current_sum += coins[i];
        count++;
        if (current_sum > total / 2) {
            cout << count << "\n";
            break;
        }
    }

    return 0;
}