#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> adj(n + 1);
        vector<int> indegree(n + 1, 0);

        for (int i = 0; i < n - 1; i++) {
            int u, v, x, y;
            cin >> u >> v >> x >> y;

            if (x > y) {
                // u -> v
                adj[u].push_back(v);
                indegree[v]++;
            } else {
                adj[v].push_back(u);
                indegree[u]++;
            }
        }

        queue<int> q;
        for (int i = 1; i <= n; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        vector<int> topo;
        while (!q.empty()) {
            int u = q.front();
            q.pop();
            topo.push_back(u);

            for (int v : adj[u]) {
                indegree[v]--;
                if (indegree[v] == 0) {
                    q.push(v);
                }
            }
        }

        vector<int> p(n + 1);
        int val = n;
        for (int node : topo) {
            p[node] = val--;
        }

        for (int i = 1; i <= n; i++) {
            cout << p[i];
            if (i < n) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}