#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int ans = 21 -(a+b);
	   // cout<<ans<<'\n';
	    if(ans > 10) cout<<-1<<'\n';
	 
	    else  cout<<ans<<'\n';
	}

}
