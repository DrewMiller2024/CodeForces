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
    ll prev = 0;
    ll ans= 0;
    while (n--) {
      ll temp;
      cin >> temp;
      if (temp-prev > ans) {
        ans = temp-prev;
      }
      prev = temp;
    }
    if (2*(x-prev) > ans) {
      ans = 2 * (x-prev);
    }
    cout << ans << endl;
  }
  return 0;
}