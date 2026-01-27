#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int a1,b1,c1,a2,b2,c2;
        cin>>a1>>b1>>c1>>a2>>b2>>c2;
        int sum = a1+b1+c1;
        int sum2 = a2+b2+c2;
        int mx = max({a1,b1,c1});
        int mx2 = max({a2,b2,c2});
        int mn = min({a1,b1,c1});
        int mn2 = min({a2,b2,c2});
        int scndmx = sum - mx -mn;
        int scndmx2 = sum2 - mx2 - mn2;
        if(mx+scndmx == mx2+scndmx2) cout<<"Tie\n";
        else if(mx+scndmx > mx2+scndmx2) cout<<"Alice\n";
        else cout<<"Bob\n";
    }
}
