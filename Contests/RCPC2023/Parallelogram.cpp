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
    ll n;
    cin >> n;
    vll as;
    for (ll i = 0; i < n; i++) {
      ll a;
      cin >> a;
      as.push_back(a);
    }
    sort(as.begin(), as.end());
    ll count = 0;
    bool can = false;
    for (ll i = 1; i < n; i++) {
      if (as[i] == as[i-1]) {
        count++;
      }
      if (count == 2) {
        can = true;
        break;
      }
    }
    cout << (can ? "YES" : "NO") << endl;
  }
  return 0;
}