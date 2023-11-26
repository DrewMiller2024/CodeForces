#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

int32_t main() {
	cin.tie(NULL); cout.tie(NULL);
  ll t;
  cin >> t;
  while (t > 0) {
    ll n;
    cin >> n;
    vll as;
    for (ll i = 0; i < n; i++) {
      ll a;
      cin >> a;
      as.push_back(a);
    }
    bool canSort = true;
    for(ll i = 0; i < n-1; i++) {
      if (as[i+1] < as[i]) {
        if (((i+1) & i) != 0) {
          canSort = false;
          break;
        }
      }
    }
    cout << (canSort ? "YES" : "NO") << endl;
    t--;
  }
  return 0;
}