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
    ll n, x, y;
    cin >> n >> x >> y;
    ll xdiv = floor(n/x);
    ll ydiv = floor(n/y);
    ll shared = floor(n / ((x * y) / gcd(x, y)));
    xdiv -= shared;
    ydiv -= shared;
    ll xCurrent = n + (n-xdiv+1);
    xCurrent = ((xdiv * xCurrent) / 2);
    ll yCurrent;
    yCurrent = ((ydiv * ((1 + ydiv))) / 2);
    cout << xCurrent - yCurrent << endl;
  }
  return 0;
}