/*This solution exceeds time limit*/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll mod = 998244353;
  ll n;
  cin >> n;
  vll pre(n+1);
  pre[0] = 0;
  for (ll i = 1; i <= n; i++) {
    ll a;
    cin >> a;
    pre[i] = (pre[i-1] ^ a);
  }
  ll ans = 0;
  for (ll l = 1; l <= n; l++) {
    for (ll r = l; r <= n; r++) {
        ans += ((pre[r]^pre[l-1])*(r-l+1));
    }
  }
  ans = ans % mod;
  cout << ans << endl;
  return 0;
}