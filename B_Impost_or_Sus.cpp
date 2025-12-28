#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
     string s;
     cin>>s;
     int n = s.length();
     int opreration =0;
     if(s[0]=='u'){
        s[0]='s';
        opreration++;
     }
     if(s[n-1]=='u'){
        s[n-1]='s';
        opreration++;
     }
     for(int i =1;i<n-1;i++){
        if(s[i]=='u' &&s[i-1]=='u'){
            s[i]='s';
            opreration++;
        }
     }
     cout<<opreration<<'\n';
    }
    return 0;
}
