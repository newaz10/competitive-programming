#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);

// Function to add two large numbers represented as strings
string addStrings(const string &num1, const string &num2) {
    string result = "";
    int carry = 0;
    int i = num1.size() - 1, j = num2.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += num1[i--] - '0';
        if (j >= 0) sum += num2[j--] - '0';
        result += (sum % 10) + '0';
        carry = sum / 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

// Function to multiply a string by a single digit
string multiplyStringByDigit(const string &num, int digit) {
    if (digit == 0) return "0";
    string result = "";
    int carry = 0;

    for (int i = num.size() - 1; i >= 0; --i) {
        int product = (num[i] - '0') * digit + carry;
        result += (product % 10) + '0';
        carry = product / 10;
    }

    if (carry > 0) {
        result += carry + '0';
    }

    reverse(result.begin(), result.end());
    return result;
}

// Function to multiply a large number by another number represented as an integer
string multiplyStrings(const string &num1, int num2) {
    string result = "0";
    string temp = num1;

    while (num2 > 0) {
        int digit = num2 % 10;
        string product = multiplyStringByDigit(temp, digit);
        result = addStrings(result, product);
        temp += '0'; // Shift left by one (multiply by 10)
        num2 /= 10;
    }

    return result;
}

// Main solve function for the problem
void solve(int N, int A) {
    string result = "0";
    string power = "1";

    for (int i = 1; i <= N; ++i) {
        power = multiplyStrings(power, A);  // Calculate A^i
        string term = multiplyStrings(power, i); // Calculate i * A^i
        result = addStrings(result, term); // Sum up results
    }

    // Strip leading zeros from the result
    while (result.length() > 1 && result[0] == '0') {
        result.erase(result.begin());
    }

    // Output result without leading zeros
    cout << result << '\n';
}

int main() {
    FIO;

    int n, a;
    while (cin >> n >> a) {
        solve(n, a);
    }

    return 0;
}
