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
    ll x, y, k;
    cin >> x >> y >> k;
    ll ans = x;
    if (y > x) {
      ans = x;
      if (k <= y-x) {
        ans += 2*(y - (x+k)) + k;
      } else {
        ans = y;
      }
    }
    cout << ans << endl;
  }
  return 0;
}