// CF (min 0900) -> Difficulty : 0990 (85)               -> Tags: 
// CC (min 1000) -> Difficulty : 1265 (30)               -> Tags: Sorting
// UVa

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
#define se second
#define it(a) for (auto &i : a)

// Maximum & Minimum Range
#define imax INT_MAX
#define imin INT_MIN

// Check This
#define int2str(s, n, itos) /*stringstream itos;*/ \
    itos << n;                                     \
    s = itos.str(); // converts a number 'n' to a string 's'
#define str2int(n, s)     \
    stringstream stoi(s); \
    stoi >> n;                                                                // converts a string 's' to a number 'n'---ONLY ONCE USABLE---
#define eraseSingle(v, pos) v.erase(v.begin() + pos)                          // Erases an element from "pos' position in zero based index from the vector 'v'
#define eraseRange(v, spos, fpos) v.erase(v.begin() + spos, v.begin() + fpos) // Erases range inclusive spos' to EXCLUSIVE(without) 'fpos' from vector 'v'

// Geometry & Maths
#define distance(x1, y1, x2, y2) sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))

// Const values:
#define mod 1000000007

// Functions:
int leftShift(int value, int time) { return value << time; }
int rightShift(int value, int time) { return value >> time; }

// Calculate Prime Numbers up to 10^8
void sieve_of_eratosthenes(int n)
{
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            { // mark all multiples of i as not prime
                is_prime[j] = false;
            }
        }
    }
}

// Count Digits of a number
int digit(long long n)
{
    if (n == 0)
    {
        return 1;
    }
    int cnt = 0;
    while (n != 0)
    {
        n = n / 10;
        cnt++;
    }
    return cnt;
}

// Prime Number Function (Calculate up to 10^6)
bool prime(ll a)
{
    if (a == 0 || a == 1)
        return 0;
    for (int i = 2; i <= round(sqrt(a)); i++)
        if (a % i == 0)
            return 0;
    return 1;
}

// GCD & LCM functions
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

// Check whether a character is vowel or consonant
bool vc(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    return false;
}

// Code Starts from here...
void solve() {
    int n;
    cin >> n;
}

int main() {
    FIO;
    // tc;

    string s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2 = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
    
    map<char, char> M;
    
    for (int i = 0; i < sz(s1); i++) M[s1[i]] = s2[i];
    
    int n;
    char cad[21];
    
    while (cin >> cad) {
        bool palindrome = 1, mirrored = 1;
        
        n = strlen(cad);
        
        for (int i = 0; i <= n / 2; i++) {
            if (cad[i] != cad[n-1-i]) palindrome = 0;
            if (cad[n-1-i] != M[cad[i]]) mirrored = 0;
        }
        
        if (palindrome && mirrored) cout << cad << " -- is a mirrored palindrome.\n\n";
        else if (palindrome && !mirrored) cout << cad << " -- is a regular palindrome.\n\n";
        else if (!palindrome && mirrored) cout << cad << " -- is a mirrored string.\n\n";
        else cout << cad << " -- is not a palindrome.\n\n";
    }

    return 0;
}