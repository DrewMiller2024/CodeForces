#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll t;
  cin >> t;
  while (t--) {
    ll a, b, c;
    cin >> a >> b >> c;
    vll v(3);
    v[0] = a; v[1] = b; v[2] = c;
    sort(v.begin(), v.end());
    bool can = false;
    if (v[0] == v[2]) {
      can = true;
    }
    if (v[0] == v[1]) {
      if ((double)v[2] / 2 == v[0]) {
        can = true;
      } else if ((double)v[2] / 3 == v[0]) {
        can = true;
      } else if ((double)v[2] / 4 == v[0]) {
        can = true;
      }
    }
    if ((double)v[1] / 2 == v[0]) {
      if ((double)v[2] / 2 == v[0] || (double)v[2] / 3 == v[0]) {
        can = true;
      }
    }
    cout << (can ? "YES" : "NO") << endl;
  }
  return 0;
}