#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;
       
        int n = r - l + 1;
        
        vector<int> a(n, -1);
        vector<char> used(n, 0);
        
        for (int orig = r; orig >= l; --orig) {
            int x = orig - l; 

            if (used[x]) continue;
           
            int k = 0;
            
            while ((1 << k) <= x) ++k;

            while (1) {
                int mask = (1 << k) - 1;
                int y = mask - x;

                if (0 <= y && y < n && !used[y]) {
                    a[x] = y + l; 
                    a[y] = x + l;
                    used[x] = used[y] = 1;
                    break;
                }
                ++k;
            }
        }
        
        long long sum = 0;
        
        for (int i = 0; i < n; ++i) {
            int bi = l + i;
            int ai = a[i];
            sum += ( (long long)(ai | bi) );
        }
        
        cout << sum << "\n";

        for (int i = 0; i < n; ++i) {
            cout << a[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}
