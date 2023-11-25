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
    vll nums;
    for (ll i = 0; i < (2*n); i++) {
      ll a;
      cin >> a;
      nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    ll ans = 0;
    ans += (nums[n-1] - nums[0]);
    ans += (nums[(2*n)-1] - nums[n]);
    cout << ans << endl;
    for (ll i = 0; i < n; i++) {
      cout << nums[i] << " " << nums[i+n] << endl;
    }
  }
  return 0;
}