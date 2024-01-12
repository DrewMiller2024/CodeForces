#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
//typedef __int32 int32_t;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  ll n;
  cin >> n;
  set<string> vtms;
  map<string, ll> mapJ;
  for (ll i = 0; i < n; i++) {
    ll c; string s;
    cin >> c >> s;
    sort(s.begin(), s.end());
    vtms.insert(s);
    if (mapJ.find(s) != mapJ.end()) {
      if (c < mapJ[s]) {
        mapJ[s] = c;
      }
    } else {
      mapJ.insert({s, c});
    }
  }
  ll minPrice = LLONG_MAX;
  for (string s : vtms) {
    ll price = LLONG_MAX;
    if (s.size() == 1) {
      if (mapJ.find("A") != mapJ.end() && mapJ.find("B") != mapJ.end() && mapJ.find("C") != mapJ.end()) {
        price = mapJ["A"] + mapJ["B"] + mapJ["C"];
      }
    } else if (s.size() == 2) {
      string c = s[0] == 'B' ? "A" : s[1] == 'B' ? "C" : "B";
      if (mapJ.find(c) != mapJ.end()) {
        price = mapJ[s] + mapJ[c];
      }
      string temps[3] = {"AB", "BC", "AC"};
      for (string temp : temps) {
        if (temp != s) {
          if (mapJ.find(temp) != mapJ.end()) {
            price = min(price, mapJ[s] + mapJ[temp]);
          }
        }
      }
    } else {
      price = mapJ[s];
    }
    if (price < minPrice) {
      minPrice = price;
    }
  }
  minPrice = minPrice == LLONG_MAX ? -1 : minPrice;
  cout << minPrice << endl;
  return 0;
}