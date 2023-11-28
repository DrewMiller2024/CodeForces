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
  ll a;
  cin >> a;
  vll nums(n+1);
  vll pre(n+1);
  nums[0] = 0;
  pre[0] = 0;
  for (ll i = 1; i < n; i++) {
    ll a;
    cin >> a;
    nums[i] = a;
    pre[i] = (pre[i-1] ^ a);
  }
  ll ans = 0;
  for (ll l = 0; l < n; l++) {
    for (ll r = l; r < n; r++) {
      ans = ans + ((pre[r+1]^pre[l])*(r-l+1));
    }
  }
  ans = ans % mod;
  cout << ans << endl;
  return 0;
}