#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    a[0] = 1;
    
    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }

    int trc = n - 1;
    vector<int> res;

    res.push_back(n);

    while(trc != 0) {
        res.push_back(a[trc]);
        trc = a[trc] - 1;
    }

    for(int i = res.size() - 1; i >= 0; i--) {
        cout << res[i] << " ";
    }

    return 0;
}