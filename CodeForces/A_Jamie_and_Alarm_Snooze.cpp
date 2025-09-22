#include <bits/stdc++.h>
using namespace std;

bool isLucky(int totalMinutes) {
    int h = (totalMinutes / 60) % 24;
    int m = totalMinutes % 60;

    if (h % 10 == 7 || h / 10 == 7 || m % 10 == 7 || m / 10 == 7) {
        return true;
    }

    return false;
}

int main() {
    int x;
    cin >> x;

    int hh, mm;
    cin >> hh >> mm;

    int total = hh * 60 + mm;

    int y = 0;
    while (true) {
        int targetTime = total - x * y;
        targetTime = (targetTime % 1440 + 1440) % 1440;

        if (isLucky(targetTime)) {
            cout << y << '\n';
            break;
        }
        y++;
    }

    return 0;
}