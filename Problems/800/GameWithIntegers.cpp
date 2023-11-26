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
    if ((n+1)%3 == 0 || (n-1)%3 == 0) {
      cout << "First" << endl;
    } else {
      cout << "Second" << endl;
    }
  }
  return 0;
}