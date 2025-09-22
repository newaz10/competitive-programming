#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    
    long long oddCount = (n + 1) / 2;
    
    if (k <= oddCount) {
        cout << 2 * k - 1 << '\n';
    } 
    else {
        long long evenPosition = k - oddCount;
        cout << 2 * evenPosition << '\n';
    }
    
    return 0;
}