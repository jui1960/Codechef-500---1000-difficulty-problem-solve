#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int ans = 0;
    int res = 0;
    if(a==4) cout<<b<<'\n';
    else {
    ans = abs(a-4);
    res = (ans*24)+b;
    cout<<res<<'\n';
    }
  

}
