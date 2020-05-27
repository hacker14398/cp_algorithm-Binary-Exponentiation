#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Without Recursion
ll powsplit(ll a, ll b, ll c){
    ll res = 1;
    while(b > 0){
        if(b&1){
            res = ((res%c)*(a%c))%c;
        }
        a = ((a%c)*(a%c))%c;
        b >>= 1;
    }
    return res;
}
// With Recursion
/*ll powsplit(ll a, ll b, ll c){
    if(b == 0) return 1;
    ll res = powsplit(a, b/2, c);
    if(b&1) return ((a%c)*(res%c)*(res%c))%c;
    else return ((res%c)*(res%c))%c;
}*/
int main() {
        ll t; cin >> t;
        while(t--){
            ll a, b, c; cin >> a >> b >> c;
            ll ans = powsplit(a, b, c);
            cout<<ans<<"\n";
        }
	// your code goes here
	return 0;
}

