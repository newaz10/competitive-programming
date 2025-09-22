#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int n;
    cin >> n;

    cout << a << " " << b << '\n';

    for (int i = 0; i < n; i++) {
        string murdered, new_person;
        cin >> murdered >> new_person;

        if (murdered == a) {
            a = new_person;
        }
        else if (murdered == b) {
            b = new_person;
        }

        cout << a << " " << b << '\n';
    }

    return 0;
}