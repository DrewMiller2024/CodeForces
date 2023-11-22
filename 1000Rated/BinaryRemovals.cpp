#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

int32_t main() {
	cin.tie(NULL); cout.tie(NULL);
  ll t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    bool ones = false;
    bool zeroes = false;
    for (int i = 1; i < s.length(); i++) {
      if (s[i-1] == '1' && s[i] == '1') {
        ones = true;
      }
      if (ones) {
        if (s[i-1] == '0' && s[i] == '0') {
          zeroes = true;
        }
      }
    }
    if (zeroes && ones) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}