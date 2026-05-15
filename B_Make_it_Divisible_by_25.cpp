#include <bits/stdc++.h>
using namespace std;

const int INF = 333;

int solve(string& s, string& t)
{
	int sptr = s.length() - 1;

	int ans = 0;
	while (sptr >= 0 && s[sptr] != t[1])
	{
		sptr--;
		ans++;
	}

	if (sptr < 0) return INF;

	sptr--;

	while (sptr >= 0 && s[sptr] != t[0])
	{
		sptr--;
		ans++;
	}

	return sptr < 0 ? INF : ans;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		string n;
		cin >> n;
		
        const string subseqs[] = { "00", "25", "50", "75" };
		int ans = INF;
        
		for (auto e : subseqs)
			ans = min(ans, solve(n, e));

		cout << ans << '\n';
	}

	return 0;
}