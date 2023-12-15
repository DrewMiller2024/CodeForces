#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll n, k;
  cin >> n >> k;
  string s = "";
  cin >> s;
  map<char, ll> mapC;
  for (ll i = 0; i < k; i++) {
      char a;
      cin >> a;
      mapC.insert({a, i});
  }
  vll subs(n+1);
  subs[0] = 0;
  ll sum = 0;
  for (ll i = 1; i <= n; i++) {
   if (mapC.find(s[i-1]) == mapC.end()) {
       subs[i] = 0;
   } else {
       subs[i] = subs[i-1] + 1;
       sum += subs[i];
   } 
  }
  cout << sum << endl;
  return 0;
}