#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

int32_t main() {
	cin.tie(NULL); cout.tie(NULL);
  ll t;
  cin >> t;
  //die that aren't on the top represent 14
  while (t--) {
    ll favI;
    cin >> favI;
    if (favI <= 14) {
      cout << "NO" << endl;
    } else {
      ll check = favI % 14;
      if (1<=check && check<=6) {
        cout << "YES" << endl;
      } else  {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}