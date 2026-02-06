#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b) cout<< "Too Early\n";
        else if(a>c) cout<<"Too Late\n";
        else if(a>=b && a<=c) cout<<"Take second dose now\n";
    }

    return 0;
}