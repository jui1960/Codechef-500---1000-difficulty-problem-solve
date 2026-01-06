#include <bits/stdc++.h>
using namespace std;

int main() {
	int r,b,p,q;
	cin>>r>>b>>p>>q;
	int ans = r*p;
	int ans2 = b*q;
	if(ans>ans2) cout<<ans<<'\n';
	else cout<<ans2<<'\n';
}
