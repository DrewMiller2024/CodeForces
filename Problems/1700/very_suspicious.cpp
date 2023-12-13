#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

ll intersections(ll upRight, ll upLeft, ll leftRight) {
  ll intersections = (upRight * upLeft) 
  + (upRight * leftRight) 
  + (upLeft * leftRight);
  return intersections;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll t;
  cin >> t;
   while (t--) {
    ll n;
    cin >> n;
    ll l = 0;
    ll r = 20000;
    while (l < r) {
      ll m = (r + l) / 2;
      if (2* intersections(m, m, m) > n) {
        r = m;
      } else if (2* intersections(m, m, m) < n) {
        l = m+1;
      } else {
        r = m;
        break;
      }
    }
    ll lines = 3 * r;
    if (2 * intersections(r, r, r-1) >=n) {
      lines--;
    }
    if (2 * intersections(r, r-1, r-1) >= n) {
      lines--;
    }
    cout << lines << endl;
   }
  return 0;
}