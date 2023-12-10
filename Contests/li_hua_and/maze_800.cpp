#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
 
ll placement(ll x, ll y, ll n, ll m) {
  bool isCorner = (x == 1 && y == 1) || (x == n && y == m) || (x== 1 && y == m) || (x == n && y == 1);
  bool isEdge =  (x == 1 || x == n || y == 1 || y == m);
  if (isCorner) {
    return 2;
  } else if (isEdge) {
    return 3;
  } else {
    return 4;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll t;
  cin >> t;
  while (t--) {
    ll n, m;
    cin >> n >> m;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ll obstacles1 = placement(x1, y1, n, m);
    ll obstacles2 = placement(x2, y2, n, m);
    ll ans = min(obstacles1, obstacles2);
    cout << ans << endl; 
  }
  return 0;
}