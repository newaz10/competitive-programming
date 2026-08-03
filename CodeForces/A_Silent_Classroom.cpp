#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;

    if (!(cin >> n)) return 0;
    
    vector<int> freq(26, 0);

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        freq[name[0] - 'a']++;
    }
    
    int total_pairs = 0;
    
    for (int count : freq) {
        int x = count / 2;
        int y = count - x;
        
        int pairs_class1 = (x * (x - 1)) / 2;
        int pairs_class2 = (y * (y - 1)) / 2;
        
        total_pairs += pairs_class1 + pairs_class2;
    }
    
    cout << total_pairs << "\n";
    
    return 0;
}