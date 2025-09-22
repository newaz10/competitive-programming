#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    size_t pos = 0;

    while ((pos = s.find("WUB", pos)) != string::npos) {
        s.replace(pos, 3, " ");
        pos++;
    }

    stringstream ss(s);
    string word;
    string result = "";
    bool first = true;

    while (ss >> word) {
        if (!first) result += " ";
        result += word;
        first = false;
    }

    cout << result << '\n';

    return 0;
}