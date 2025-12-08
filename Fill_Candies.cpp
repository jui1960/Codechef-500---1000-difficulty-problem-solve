#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,m;
	    cin>>n>>k>>m;
	    int ans = n/(k*m);
	   
	    if(n%(k*m)==0)cout<<ans<<'\n';
	    else cout<<ans+ 1<<'\n';
	}

}
