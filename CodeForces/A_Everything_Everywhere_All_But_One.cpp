#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int sum = 0;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] * n == sum)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}