#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_length = 1;

    for(int i = 0; i < n; i++) {
        int length = 1;
        int start = i;
        
        while(a[start] != -1) {
            length++;
            start = a[start] - 1;
        }
        max_length = max(max_length, length);
    }

    cout << max_length << endl;    

    return 0;
}