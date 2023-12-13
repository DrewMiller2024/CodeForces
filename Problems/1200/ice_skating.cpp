#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

bool seen[1000][1000];
bool snow[1000][1000];

void look(ll y, ll x) {
  seen[y][x] = true;
  for (ll i = 0; i < 1000; i++) {
    if (snow[i][x] == true && seen[i][x] == false) {
      look(i, x);
    }
    if (snow[y][i] == true && seen[y][i] == false) {
      look(y, i);
    }
  }
  return;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll n;
  cin >> n;
  vector<pair<ll, ll>> snowDrift;
  for (ll i = 0; i < 1000; i++) {
    for (ll j = 0; j < 1000; j++) {
      seen[i][j] = false;
      snow[i][j] = false;
    }
  }
  for (ll i = 0; i < n; i++) {
    ll x, y;
    cin >> x >> y;
    y--;
    x--;
    snowDrift.push_back({y, x});
    snow[y][x] = true;
  }
  ll output = 0;
  for (ll i = 0; i < 1000; i++) {
    for (ll j = 0; j < 1000; j++) {
      if (snow[i][j] == true && seen[i][j] == false) {
        output++;
        look(i, j);
      }
    }
  }
  output--;
  cout << output << endl;
  return 0;
}