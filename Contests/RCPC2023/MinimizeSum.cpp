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
    vll vec;
    for (ll i = 0; i < n; i++) {
      ll a;
      cin >> a;
      vec.push_back(a);
    }
    vec.erase(vec.begin() + (n-1));
    sort(vec.begin(), vec.end());
    ll sum = 0;
    for (ll i = 0; i < vec.size()-1; i++) {
      sum = sum + vec[i];
    } 
    cout << sum << endl;
  }
  return 0;
}