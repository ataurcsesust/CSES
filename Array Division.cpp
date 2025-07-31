#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(), x.end()
#define endl '\n'
ll ok(vector<ll>& a, ll n, ll sum, ll k) {
    ll cnt = 0, s = 0, mx = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] + s <= sum) {
            s += a[i];
        } else {
            cnt++;
            s = a[i];
        }
        if (s > sum) return LLONG_MAX; 
        mx = max(mx, s);
    }
    if (s <= sum) cnt++;
    else return LLONG_MAX;
 
    return (cnt <= k) ? mx : LLONG_MAX;
}
 
void solve() {
     ll n , k,sum=0; cin >> n >> k;
     vector<ll>a(n); for(auto &it: a) cin >>it, sum +=it;
     ll left=0,right=sum,ans=sum;
     while(left<=right){
           ll mid=left + (right-left)/2LL;
           ll f =ok(a,n, mid,k);
           if(f!=LLONG_MAX){
               right=mid-1LL;
               ans=min(ans,mid);
           }
           else left=mid+1LL;
     }
 
     cout << ans <<endl;
 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
   // cin >> t;
    while (t--) solve();
    return 0;
}
