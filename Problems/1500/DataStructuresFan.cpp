#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,type,l,r,rangeXor,queries;
        string bin;
        cin>>n;
        vector < ll > v(n+1),pre(n+1);
        ll x[2] = {0,0};
        pre[0] = 0;
        for(ll i = 1 ; i <= n; i++) {
            cin>>v[i];
            pre[i] = pre[i-1]^v[i];
        }
        cin>>bin;
        bin = '$'+bin;
        for(ll i = 1 ; i <= n ; i++) {
            if(bin[i] == '0')
                x[0]^=v[i];
            else
                x[1]^=v[i];
        }
        cin>>queries;
        while(queries--) {
            cin>>type;
            if(type == 1) {
                cin>>l>>r;
                rangeXor = pre[r]^pre[l-1];
                x[0]^= rangeXor;
                x[1]^= rangeXor;
            }
            else {
                cin>>l;
                cout<<x[l]<<" ";
            }
        }
        cout<<endl;
    }  
    return 0;
}