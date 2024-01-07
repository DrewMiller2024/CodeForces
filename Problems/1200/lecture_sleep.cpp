#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
/*typedef __int32 int32_t;*/

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll n, k;
  cin >> n >> k;
  vll a;
  for (ll i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    a.push_back(temp);
  }
  vll t;
  for (ll i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    t.push_back(temp);
  }
  vll theorems(n);
  ll maxK = 0;
  ll awake = 0;
  if (t[0]) {
    awake += a[0];
    theorems[0] = 0;
  } else {
    theorems[0] = a[0];
    maxK = theorems[0];
  }
  for (ll i = 1; i < n; i++) {
    theorems[i] = theorems[i-1];
    if (!t[i]) {
      theorems[i] += a[i];
    } else {
      awake += a[i];
    }
    if (i >= k) {
      if (!t[i-k]) {
        theorems[i] -= a[i-k];
      }
    }
    if (theorems[i] > maxK) {
      maxK = theorems[i];
    }
  }
  ll ans = maxK + awake;
  cout << ans << endl;
}