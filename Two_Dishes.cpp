#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if(n>b) cout<<"NO\n";
        else {
            int rs = a+c;
            if((rs >=b || rs>=n) && (b>=n)){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
    }

}
