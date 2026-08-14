#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> lucky_numbers = {
        4, 7,
        44, 47, 74, 77,
        444, 447, 474, 477, 744, 747, 774, 777
    };

    bool is_almost_lucky = false;
    for (int i = 0; i < (int)lucky_numbers.size(); i++) {
        if (n % lucky_numbers[i] == 0) {
            is_almost_lucky = true;
            break;
        }
    }

    if (is_almost_lucky) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}