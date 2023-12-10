#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
 
ll dfs(ll x, ll y, vector<vll> &mat, vector<vector<bool>> &visited, ll n, ll m) {
    ll visCount = mat[x][y];
    visited[x][y] = true;
    if (x+1 < n) {
      if (!visited[x+1][y]) {
        visCount += dfs(x+1, y, mat, visited, n, m);
      }
    }
    if (y+1 < m) {
      if (!visited[x][y+1]) {
        visCount += dfs(x, y+1, mat, visited, n, m);
      }
    }
    if (x-1 >= 0) {
      if (!visited[x-1][y]) {
        visCount += dfs(x-1, y, mat, visited, n, m);
      }
    }
    if (y-1 >= 0) {
      if (!visited[x][y-1]) {
        visCount += dfs(x, y-1, mat, visited, n, m);
      }
    }
    return visCount;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll t;
  cin >> t;
  while (t--) {
    ll n, m;
    cin >> n >> m;
    vector<vll> mat;
    vector<vector<bool>> visited;
    for (ll i = 0; i < n; i++) {
      vll temp;
      vector<bool> temp2;
      for (ll j = 0; j < m; j++) {
        ll a;
        cin >> a;
        temp.push_back(a);
        if (a == 0) {
          temp2.push_back(true);
        } else {
          temp2.push_back(false);
        }
      }
      mat.push_back(temp);
      visited.push_back(temp2);
    }
    vll volumes;
    for (ll i = 0; i < n; i++) {
      for (ll j = 0; j < m; j++) {
        if (!visited[i][j]) {
          ll volume = dfs(i, j, mat, visited, n, m);
          volumes.push_back(volume);
        }
      }
    }
    ll maxll = 0;
    for (ll volume : volumes) {
      maxll = max(maxll, volume);
    }
    cout << maxll << endl;
  }
  return 0;
}