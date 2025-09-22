#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long full_weeks = n / 7;
    long long remainder = n % 7;
    
    long long min_off = full_weeks * 2;
    long long max_off = full_weeks * 2;
    
    min_off += max(0LL, remainder - 5);
    max_off += min(2LL, remainder);
    
    cout << min_off << " " << max_off << '\n';
    
    return 0;
}