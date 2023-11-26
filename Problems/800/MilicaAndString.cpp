#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

int32_t main() {
	cin.tie(NULL); cout.tie(NULL);
  ll t;
  cin >> t;
  while (t--) {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll a = 0;
    ll b = 0;
    for (ll i = 0; i < n; i++) {
      if (s[i] == 'A') {
        a++;
      } else {
        b++;
      }
    }
    if (b == k) {
      cout << 0 << endl;
    } else if (b < k) {
      ll i = 0;
      while (b < k) {
        if (s[i] == 'A') {
          b++;
        }
        i++;
      }
      cout << 1 << endl;
      cout << i << " " << 'B' << endl;;
    } else {
      ll i = 0;
      while (b > k) {
        if (s[i] == 'B') {
          b--;
        }
        i++;
      }
      cout << 1 << endl;
      cout << i << " " << 'A' << endl;;
    }
  }
  return 0;
}