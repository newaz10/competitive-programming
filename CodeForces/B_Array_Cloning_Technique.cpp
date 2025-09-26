#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        map<int, int> freq;

        for (int x : a) {
            freq[x]++;
        }
        
        int maxFreq = 0;
        
        for (auto &p : freq) {
            maxFreq = max(maxFreq, p.second);
        }
        
        if (maxFreq == n) {
            cout << "0\n";
            continue;
        }
        
        int operations = 0;
        int current = maxFreq;
        
        while (current < n) {
            operations++;
            current *= 2;
        }
        
        cout << operations + (n - maxFreq) << '\n';
    }
    
    return 0;
}