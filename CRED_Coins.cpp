#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int ans = x*y;
	    if(ans<100) cout<<0<<'\n';
	    else {
	        cout<<ans/100<<'\n';
	    }
	}

}
