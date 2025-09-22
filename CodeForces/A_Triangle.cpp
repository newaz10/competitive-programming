#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(4);

    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    
    bool triangle = false;
    bool segment = false;
    
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            for (int k = j + 1; k < 4; k++) {
                int x = a[i], y = a[j], z = a[k];
                if (x + y > z) {
                    triangle = true;
                } 
                else if (x + y == z) {
                    segment = true;
                }
            }
        }
    }
    
    if (triangle) {
        cout << "TRIANGLE" << '\n';
    } 
    else if (segment) {
        cout << "SEGMENT" << '\n';
    } 
    else {
        cout << "IMPOSSIBLE" << '\n';
    }
    
    return 0;
}