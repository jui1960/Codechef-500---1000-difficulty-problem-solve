#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int ans = x/10,ans2=y/10;
	    if(x%10!=0) ans++;
	    if(y%10!=0) ans2++;
	    cout<<abs(ans-ans2)<<'\n';
	    
	}

}
