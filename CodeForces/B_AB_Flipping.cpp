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

        string s;
        cin >> s;
        
        vector<bool> suffix_has_B(n, false);
        suffix_has_B[n-1] = (s[n-1] == 'B');

        for (int i = n-2; i >= 0; i--) {
            suffix_has_B[i] = suffix_has_B[i+1] || (s[i] == 'B');
        }
        
        int ans = 0;
        bool has_A_so_far = false;
        
        for (int i = 0; i < n-1; i++) {
            if (s[i] == 'A') {
                has_A_so_far = true;
            }
            
            if (has_A_so_far && suffix_has_B[i+1]) {
                ans++;
            }
        }
        
        cout << ans << '\n';
    }
    
    return 0;
}