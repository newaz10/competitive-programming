// CC (min 1000) -> Difficulty : 1265 (30)               -> Tags: Sorting

// Header
#include <bits/stdc++.h>
using namespace std;

// Typedef
typedef long long ll;

// First I/O operation
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// Test Case for CP
#define tc int t; cin >> t; sol;
#define sol while (t--) {solve();}

// Print Shortcuts
#define printvs(vec) for (auto &i : vec) { cout << i << ' '; } cout << '\n';
#define printvn(vec) for (auto &i : vec) { cout << i << '\n'; } cout << '\n';

// Debug:
#define value(x) cout << "The value of " << #x << " is " << x << endl

// Sort, Reverse, Sum
#define isSorted(v) is_sorted(all(v));
#define asort(arr, n) sort(aall(arr, n));
#define asortd(arr, n) sort(aall(arr, n), greater<int>());
#define sorta(vec) sort(vec.begin(), vec.end());
#define sortd(vec) sort(vec.begin(), vec.end(), greater<int>());
#define revers(v) reverse(v.begin(), v.end());
#define ac(v) accumulate(v.begin(), v.end(), 0);
#define acc(v, start, end, val) accumulate(v.start, v.end, val);

// String
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);

// Vector, Deque, Priority Queue, Pair, Map, Set (have to change)
#define deque(type, d) deque<type> d;
#define pq(type, q) priority_queue<type> q;                               // max heap
#define pqm(type, q) priority_queue<type, vector<type>, greater<type>> q; // min heap (can be done in other ways)
#define pair(type1, type2, p) pair<type1, type2> p;
#define map(type1, type2, m) map<type1, type2> m;
#define set(type, s) set<type> s;
#define umap(type1, type2, m) unordered_map<type1, type2> m;
#define uset(type, s) unordered_set<type> s;
#define mp(type1, type2) make_pair(type1, type2);
#define sz(x) (int((x).size()))
#define pb(val) push_back(val);
#define pf(val) push_front(val);
#define pob pop_back();
#define pof pop_front();
#define all(x) x.begin(), x.end()
#define asize(a) (sizeof((a)) / sizeof((a[0])))
#define aall(arr, n) arr, arr + n
#define cl(v) v.clear();
#define fi first
#define it(a) for (auto &i : a)

// Maximum & Minimum Range
#define imax INT_MAX
#define imin INT_MIN

// Erases an element from "pos' position in zero based index from the vector 'v'
#define eraseSingle(v, pos) v.erase(v.begin() + pos)    

// Erases range inclusive spos' to EXCLUSIVE(without) 'fpos' from vector 'v'
#define eraseRange(v, spos, fpos) v.erase(v.begin() + spos, v.begin() + fpos) 

// Const values:
#define mod 1000000007

// Code Starts from here...
void solve() {
    long long n;
    cin >> n;

    long long power = 4; // 2^2
    for (int k = 2; k <= 31; k++) {
        long long s = power - 1; // 2^k - 1
        if (n % s == 0) {
            cout << n / s << "\n";
            break;
        }
        power *= 2;
    }
}

int main() {
    FIO;
    tc;

    return 0;
}