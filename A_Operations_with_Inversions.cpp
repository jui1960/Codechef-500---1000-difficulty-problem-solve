#include <bits/stdc++.h>
#define int long long
#define nl "\n"
#define sp " "
const int MOD = 1e9 + 7;
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int m = v[0];
    int ans = 0;
    for(int i = 1; i < n; i++){
        if(m <= v[i]) m = v[i];
        else ans++;
    }
    cout << ans << nl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    
    return 0;
}