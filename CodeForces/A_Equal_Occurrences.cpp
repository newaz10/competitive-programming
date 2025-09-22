#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> freq;

        for (int x : a) {
            freq[x]++;
        }

        vector<int> freqs;

        for (auto& p : freq) {
            freqs.push_back(p.second);
        }

        int max_len = 0;
        
        int max_freq = *max_element(freqs.begin(), freqs.end());

        for (int x = 1; x <= max_freq; x++) {
            int count = 0;

            for (int f : freqs) {
                if (f >= x) {
                    count++;
                }
            }

            max_len = max(max_len, x * count);
        }

        cout << max_len << '\n';
    }
    
    return 0;
}