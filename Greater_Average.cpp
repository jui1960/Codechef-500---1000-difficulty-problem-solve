#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    float ans = (round(a+b))/2;
    if(ans>c) cout<<"YES\n";
    else cout<<"NO\n";
    }

}
