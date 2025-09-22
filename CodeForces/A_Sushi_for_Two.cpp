#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> t(n);

    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    vector<pair<int, int>> groups;

    int current = t[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (t[i] == current) {
            count++;
        } 
        else {
            groups.push_back({current, count});
            current = t[i];
            count = 1;
        }
    }
    groups.push_back({current, count}); 
    
    int max_len = 0;

    for (int i = 0; i < groups.size() - 1; i++) {
        int type1 = groups[i].first;
        int type2 = groups[i+1].first;
        
        int count1 = groups[i].second;
        int count2 = groups[i+1].second;

        if (type1 != type2) {
            int len = 2 * min(count1, count2);
            max_len = max(max_len, len);
        }
    }

    cout << max_len << '\n';

    return 0;
}