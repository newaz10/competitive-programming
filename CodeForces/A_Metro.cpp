#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    if(a[0] == 0) {
        cout << "NO" << endl;
        return 0;
    }
    else if(a[s - 1] == 0 && b[s - 1] == 0) {
        cout << "NO" << endl;
        return 0;
    }
    else if(a[s - 1] == 1) {
        cout << "YES" << endl;
        return 0;
    }
    else if(b[s - 1] == 1) {
        for(int i = s; i < n; i++) {
            if(a[i] == 1 && b[i] == 1) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;

    return 0;
}