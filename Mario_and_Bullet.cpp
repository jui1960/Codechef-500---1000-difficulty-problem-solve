#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int ans = z-(y/x);
	    if(ans<0)cout<< 0<<'\n';
	    else cout<<ans<<'\n';
	}

}
