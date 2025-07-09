#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'
void solve() {
 
     ll n , m ;  cin >> n >> m ; 
     multiset<ll>ms;
     for(ll i=0;i<n;i++){
         ll x; cin >>x;
         ms.insert(x);
     }
     while(m--){
         ll a; cin >>a;
         auto it=ms.upper_bound(a);
         if(it==ms.begin()){
            cout << -1 <<endl;
         }
         else {
             it--;
             ms.erase(it);
             cout << *it <<endl;
         }
     }
     
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
