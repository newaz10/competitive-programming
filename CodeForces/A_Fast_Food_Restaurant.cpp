#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        vector<vector<int>> dishes = {
            {1,0,0},
            {0,1,0},
            {0,0,1},
            {1,1,0},
            {1,0,1},
            {0,1,1},
            {1,1,1}
        };
        
        int best = 0;
        
        for (int mask = 0; mask < (1<<7); mask++) {
            int total_a = 0, total_b = 0, total_c = 0, count = 0;
            bool valid = true;
            
            for (int i = 0; i < 7; i++) {
                if (mask & (1 << i)) {
                    total_a += dishes[i][0];
                    total_b += dishes[i][1];
                    total_c += dishes[i][2];
                    count++;
                }
            }
            
            if (total_a <= a && total_b <= b && total_c <= c) {
                best = max(best, count);
            }
        }
        
        cout << best << '\n';
    }
    
    return 0;
}