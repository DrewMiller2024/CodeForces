#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
/*typedef __int32 int32_t;*/

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll t;
  cin >> t;
  while (t--) {
    ll n, m, k;
    cin >> n >> m >> k;
    vll a(n);
    vll b(m);
    for (ll i = 0; i < n; i++) {
      ll temp;
      cin >> temp;
      a[i] = temp;
    }
    for (ll i = 0; i < m; i++) {
      ll temp;
      cin >> temp;
      b[i] = temp;
    }
    ll iterat = min(k, max(n, m));
    if (k % 2 == 0 && iterat %2 == 1) {
      iterat += 1;
    } else if (k % 2 == 1 && iterat %2 == 0) {
      iterat += 1;
    }

    for (ll i = 1; i <= iterat; i++) {
      sort(a.begin(), a.end());
      sort(b.begin(), b.end());
      if (i % 2 == 0) {
        if (b[0] < a[a.size()-1]) {
          ll temp = b[0];
          b[0] = a[a.size()-1];
          a[a.size()-1] = temp;
        }
      } else {
        if (a[0] < b[b.size()-1]) {
          ll temp = a[0];
          a[0] = b[b.size()-1];
          b[b.size()-1] = temp;
        }
      }
    }
    ll sum = 0;
    for (ll i = 0; i < a.size(); i++) {
      sum += a[i];
    }
    cout << sum << endl;
  }
}