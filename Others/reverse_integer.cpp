#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int ans = 0;
    while(num != 0) {
        short digit = num%10;
        ans = (ans*10) + digit;
        num /= 10;
    }
    cout << ans << '\n';

    return 0;
}
