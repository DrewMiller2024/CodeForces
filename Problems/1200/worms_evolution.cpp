#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef __int32 int32_t;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll n;
  cin >> n;
  vll a(n+1);
  vll b(n+1);
  map<ll, ll> aMap;
  a[0] = 0;
  vll ans(3);
  for (ll i = 1; i <= n; i++) {
    ll temp;
    cin >> temp;
    a[i] = temp;
    b[i] = temp;
    aMap.insert({temp, i});
  }
  bool found = false;
  sort(a.begin(), a.end());
  for (ll i = n; i > 0; i--) {
    ll sum = a[i];
    for (ll j = i-1; j > 0; j--) {
      for (ll k = j-1; k > 0; k--) {
        if (a[k] == sum - a[j]) {
          ans[0] = aMap[a[i]];
          ans[1] = aMap[a[j]];
          for (ll m = 1; m <=n; m++) {
            if (b[m] == a[k] && m != ans[1]) {
              ans[2] = m;
              break;
            }
          }
          found = true;
          break;
        }
      }
    }
    if (found) {
      break;
    }
  }
  if (!found) {
    cout << -1 << endl;
  } else {
    cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
  }
}