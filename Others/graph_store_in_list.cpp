#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector <int> adj[n+1]; ///Array of vector! (List)

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v); ///have 2 use Pair in weighted graph! :)
        adj[v].push_back(u);
    }

    for(int i = 0; i <= n; i++) {
        cout << i << " --> ";
        for(int j : adj[i]) {
            cout << j << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
    cout << adj[2].size() << '\n';

    return 0;
}

/*
Input:
5 6
1 3
2 4
2 1
3 4
2 5
4 5
*/
