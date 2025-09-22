#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> stable;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                stable.push_back(i + 1);
            }
        }

        if (stable.empty()) {
            cout << "YES\n";

            for (int i = n; i >= 1; i--) {
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }

        sort(stable.begin(), stable.end());
        int min_s = stable[0];
        int max_s = stable.back();

        if (min_s - 1 == 1) {
            cout << "NO\n";
            continue;
        }

        if (n - max_s == 1) {
            cout << "NO\n";
            continue;
        }

        bool possible = true;

        for (int i = 0; i < (int)stable.size() - 1; i++) {
            if (stable[i+1] - stable[i] == 2) {
                possible = false;
                break;
            }
        }

        if (!possible) {
            cout << "NO\n";
            continue;
        }

        vector<int> left_block;

        for (int x = 1; x < min_s; x++) {
            left_block.push_back(x);
        }

        sort(left_block.rbegin(), left_block.rend());

        vector<int> right_block;

        for (int x = max_s + 1; x <= n; x++) {
            right_block.push_back(x);
        }

        sort(right_block.rbegin(), right_block.rend());

        vector<int> mid_block;
        int prev = min_s - 1;

        for (int x : stable) {
            vector<int> between;

            for (int val = prev + 1; val < x; val++) {
                if (s[val - 1] == '0') {
                    between.push_back(val);
                }
            }

            sort(between.rbegin(), between.rend());

            for (int val : between) {
                mid_block.push_back(val);
            }

            mid_block.push_back(x);
            prev = x;
        }

        vector<int> after;

        for (int val = prev + 1; val <= max_s; val++) {
            if (s[val - 1] == '0') {
                after.push_back(val);
            }
        }

        sort(after.rbegin(), after.rend());

        for (int val : after) {
            mid_block.push_back(val);
        }

        vector<int> result;

        for (int x : left_block) result.push_back(x);
        for (int x : mid_block) result.push_back(x);
        for (int x : right_block) result.push_back(x);

        cout << "YES\n";
        
        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}