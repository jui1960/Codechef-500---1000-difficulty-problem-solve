#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int ans =abs(x-y);
	    if(ans<=z)cout<<"YES\n";
	    else cout<<"NO\n";
	}

}
