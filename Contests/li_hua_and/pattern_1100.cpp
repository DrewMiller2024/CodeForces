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
      ll n, k;
      cin >> n >> k;
      vector<vll> vec2d(n);
      for (ll i = 0; i < n; i++) {
          for (ll j = 0; j < n; j++) {
              ll a;
              cin >> a;
              vec2d[i].push_back(a);
          }
      }
      ll operations = 0;
      for (ll i = 0; i < n; i++) {
          for (ll j = 0; j < n; j++) {
              if (vec2d[i][j] != vec2d[n-1-i][n-1-j]) {
                  operations++;
              }
          }
      }
      operations = operations / 2;
      bool can = false;
      if (operations <= k) {
          if (n%2 == 1) {
              can = true;
          } else if ((k-operations)%2 == 0) {
            can = true;
          } 
      }
      cout << (can ? "YES" : "NO") << endl;
  }
  return 0;
}