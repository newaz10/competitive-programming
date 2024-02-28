#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <int> v;
    v.push_back(1);

    for(int i = 1; i <= n; i++) {
        int car = 0;
        for(int j = 0; j < v.size(); j++) {
            int val = v[j] * i + car;
            v[j] = val%10;
            car = val/10;
        }

        while(car != 0) {
            v.push_back(car%10);
            car /= 10;
        }
    }
    reverse(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    cout << '\n';

    return 0;
}
