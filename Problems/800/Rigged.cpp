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
    ll s1, e1;
    cin >> s1 >> e1;
    ll ans = s1;
    for (ll i = 1; i < n; i++) {
      ll s, e;
      cin >> s >> e;
      if (e >= e1 && s1 <= s) {
        ans = -1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}