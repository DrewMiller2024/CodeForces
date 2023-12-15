#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll n;
  cin >> n;
  vll combos(61);
  combos[0] = 1;
  for (ll i = 1; i <= 60; i++) {
    if (i % 2 == 1) {
      combos[i] = 0;
    } else {
      combos[i] = combos[i-2] * 2;
    }
  }
  ll ans = combos[n];
  cout << ans << endl;
  return 0;
}