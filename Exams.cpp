#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int ans = (x*y)/2;
	    if(z>ans)cout<<"YES\n";
	    else cout<<"NO\n";
	}

}
