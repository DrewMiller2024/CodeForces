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
    ll n;
    cin >> n;
    ll x, y, z;
    bool canAdd = true;
    if (n < 7 || n == 9) {
      canAdd = false;
    } else if (n % 2 == 1) {
      if ((n-3)%3 != 0) {
        x = 1;
        y = 2;
        z = n-3;
      } else {
        x = 1;
        y = 4;
        z = n-5;
      }
    } else {
      if ((n-6)%3 != 0) {
        x = 1;
        y = 5;
        z = n-6;
      } else {
        x = 1;
        y = 4;
        z = n - 5;
      }
    }
    cout << (canAdd ? "YES" : "NO") << endl;
    if (canAdd) {
      cout << x << " " << y << " " << z << endl;
    }
  }
  return 0;
}