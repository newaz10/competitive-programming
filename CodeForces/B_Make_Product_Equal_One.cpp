#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int pos = 0, neg = 0, zero = 0;

    long long minimum_op = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 0) {
            zero++;
            minimum_op++;
        } else if (x > 0) {
            pos++;
            minimum_op += (x - 1);
        } else {
            neg++;
            minimum_op += (-1 - x);
        }
    }

    neg %= 2;

    if (neg > 0 && neg > zero) {
        neg -= zero;
        minimum_op += neg * 2;
    }

    cout << minimum_op << "\n";

    return 0;
}