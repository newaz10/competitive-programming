#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long res = 1;

    for (int i = 2; i <= n; i++) {
        res *= i;
    }

    return res;
}

long long countDistinctPermutations(string s) {
    vector<int> freq(26, 0);

    for (char c : s) {
        freq[c - 'a']++;
    }
    
    long long total = factorial(s.size());

    for (int count : freq) {
        if (count > 1) {
            total /= factorial(count);
        }
    }

    return total;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;
        
        if (n == 1) {
            cout << s << '\n';
            continue;
        }
        
        string best = s;
        long long minPerms = countDistinctPermutations(s);
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                string temp = s;
                temp[i] = s[j];
                long long perms = countDistinctPermutations(temp);
                
                if (perms < minPerms) {
                    minPerms = perms;
                    best = temp;
                }
            }
        }
        
        cout << best << '\n';
    }
    return 0;
}