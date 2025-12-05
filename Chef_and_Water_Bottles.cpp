#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int ans = y/x;
	    if(ans>n)cout<<n<<'\n';
	    else cout<<ans<<'\n';
	}

}
