#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        
        bool possible = false;
        
        vector<pair<int, int>> rect1;
        rect1.push_back({a1, b1});
        rect1.push_back({b1, a1});
        
        vector<pair<int, int>> rect2;
        rect2.push_back({a2, b2});
        rect2.push_back({b2, a2});
        
        for (int i = 0; i < rect1.size(); i++) {
            int x1 = rect1[i].first;
            int y1 = rect1[i].second;

            for (int j = 0; j < rect2.size(); j++) {
                int x2 = rect2[j].first;
                int y2 = rect2[j].second;
                
                if (x1 == x2 && y1 + y2 == x1) {
                    possible = true;
                }

                if (y1 == y2 && x1 + x2 == y1) {
                    possible = true;
                }
            }
        }
        
        cout << (possible ? "Yes" : "No") << '\n';
    }
    
    return 0;
}