#include <bits/stdc++.h>
using namespace std;

int getPriority(const string& status) {
    if (status == "rat") return 0;
    if (status == "woman" || status == "child") return 1;
    if (status == "man") return 2;
    return 3;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<tuple<int, int, string>> crew;

    for (int i = 0; i < n; i++) {
        string name, status;
        cin >> name >> status;
        crew.push_back(make_tuple(getPriority(status), i, name));
    }

    sort(crew.begin(), crew.end());

    for (int i = 0; i < n; i++) {
        cout << get<2>(crew[i]) << '\n';
    }

    return 0;
}