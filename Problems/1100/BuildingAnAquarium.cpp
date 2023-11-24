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
    ll n, x;
    cin >> n >> x;
    vll corals;
    for (ll i = 0; i < n; i++) {
      ll temp;
      cin >> temp;
      corals.push_back(temp);
    }
    sort(corals.begin(), corals.end());
    ll l = 0;
    ll r = INT32_MAX;
    ll m;
    while (l < r) {
      m = l + ((r - l + 1) / 2);
      ll sum = 0;
      for (ll i = 0; i < n; i++) {
        if (m - corals[i] > 0) {
          sum += m - corals[i];
        } else {
          break;
        }
      }
      if (sum <= x) {
        l = m;
      } else {
        r = m - 1;
      }
    }
    cout << l << endl;
  }
  return 0;
}