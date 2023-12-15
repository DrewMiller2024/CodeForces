#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;

//This solution considers every possibility manually, not the correct way to solve it, but it gets accepted
ll findCheapest(map<string, ll> &mapV, string &s, ll &c) {
    ll cheapest = -1;
    if (s.size() == 3) {
        cheapest = c;
    } else if (s.size() == 2) {
        ll temp1 = LLONG_MAX;
        ll temp2 = LLONG_MAX;
        ll temp3 = LLONG_MAX;
        if (s == "ab") {
            if (mapV.find("bc") != mapV.end()) {
                temp1 = mapV["bc"];
            }
            if (mapV.find("ac") != mapV.end()) {
                temp2 = mapV["ac"];
            }
            if (mapV.find("c") != mapV.end()) {
                temp3 = mapV["c"];
            }
        } else if (s == "bc") {
            if (mapV.find("ab") != mapV.end()) {
                temp1 = mapV["ab"];
            } if (mapV.find("ac") != mapV.end()) {
                temp2 = mapV["ac"];
            } 
            if (mapV.find("a") != mapV.end()) {
                temp3 = mapV["a"];
            }
        } else if (s == "ac") {
            if (mapV.find("ab") != mapV.end()) {
                temp1 = mapV["ab"];
            } 
            if (mapV.find("bc") != mapV.end()) {
                temp2 = mapV["bc"];
            }
            if (mapV.find("b") != mapV.end()) {
                temp3 = mapV["b"];
            }
        }
        cheapest = min(temp1, min(temp2, temp3));
        if (cheapest == LLONG_MAX) {
            cheapest = -1;
        } else {
            cheapest += c;
        }
    } else {
        ll temp1 = LLONG_MAX;
        ll temp2 = LLONG_MAX;
        if (s == "a") {
            if (mapV.find("b") != mapV.end() && mapV.find("c") != mapV.end()) {
                temp1 = mapV["b"] + mapV["c"];
            }
            if (mapV.find("bc") != mapV.end()) {
                temp2 = mapV["bc"];
            }
        } else if (s == "b") {
            if (mapV.find("a") != mapV.end() && mapV.find("c") != mapV.end()) {
                temp1 = mapV["a"] + mapV["c"];
            }
            if (mapV.find("ac") != mapV.end()) {
                temp2 = mapV["ac"];
            }
        } else if (s == "c") {
            if (mapV.find("b") != mapV.end() && mapV.find("a") != mapV.end()) {
                temp1 = mapV["b"] + mapV["a"];
            } 
            if (mapV.find("ab") != mapV.end()) {
                temp2 = mapV["ab"];
            }
        }
        cheapest = min(temp1, temp2);
        if (cheapest == LLONG_MAX) {
            cheapest = -1;
        } else {
            cheapest += c;
        }
    }
    return cheapest;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
    map<string, ll> mapV;
    ll n;
    cin >> n;
    ll ans = -1;
    for (ll i = 1; i <= n; i++) {
        ll c; string s;
        cin >> c >> s;
        for (auto& x : s) { 
        x = tolower(x); 
        } 
        sort(s.begin(), s.end());
        ll cheapestI = findCheapest(mapV, s, c);
        if (ans == -1) {
            ans = cheapestI;
        } else if (cheapestI !=-1) {
            ans = min(ans, cheapestI);
        }
        if (mapV.find(s) == mapV.end()) {
            mapV.insert({s, c});
        } else {
            if (c < mapV[s]) {
                mapV[s] = c;
            }
        }
    }
    cout << ans << endl;
  return 0;
}
