#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        int a,b;cin>>a>>b;
        int ans = a+b;

        if(ans <3) cout<<1<<'\n';
        else if(ans>=3 && ans<=10) cout<<2<<'\n';
        else if(ans>=11 && ans<=60) cout<<3<<'\n';
        else cout<<4<<'\n';
    }
    

    return 0;
}