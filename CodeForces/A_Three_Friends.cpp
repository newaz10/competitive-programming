#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        vector<long long> v(3);
        cin >> v[0] >> v[1] >> v[2];

        sort(v.begin(), v.end());
        
        if (v[2] - v[0] <= 2) {
            cout << 0 << '\n';
        } 
        else {
            v[0]++;
            v[2]--;
            long long ans = (v[1] - v[0]) + (v[2] - v[0]) + (v[2] - v[1]);
            cout << ans << '\n';
        }
    }
    
    return 0;
}