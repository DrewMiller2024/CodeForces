#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;


int main() {
  ll n;
  cin >> n;
  vll b(n+1); b[0] = 0;
  vll d(n+1); d[0] = 0;
  for (ll i = 1; i <= n; i++) {
    ll a, c;
    cin >> a >> c;
    b[i] = a;
    d[i] = c;
  }
  sort(b.begin(), b.end());
  sort(d.begin(), d.end());
  pair<ll, ll> yrN; yrN.first = 0; yrN.second = 0;
  ll alive = 0;
  ll j = 0;
  for (ll year : b) {
    alive++;
    while (d[j] <= year) {
      alive--;
      j++;
    }
    if (yrN.second < alive) {
      yrN.first = year;
      yrN.second = alive;
    }
  }

  cout <<yrN.first<<" "<<yrN.second<< endl;

  return 0;
}