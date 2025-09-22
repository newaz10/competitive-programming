#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    int n;
    cin >> n;

    double min_time = 1e9;

    for (int i = 0; i < n; i++) {
        double xi, yi, vi;
        cin >> xi >> yi >> vi;

        double dx = xi - a;
        double dy = yi - b;
        
        double dist = sqrt(dx*dx + dy*dy);
        double time = dist / vi;

        if (time < min_time) {
            min_time = time;
        }
    }

    cout << fixed << setprecision(20) << min_time << '\n';

    return 0;
}