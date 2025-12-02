#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    
	    cin>>n>>x;
	    if(x>=n){
	        cout<<0<<'\n';
	        continue ;
	    }
	    else{
	        int ans =((n-x)+3)/4;
	        cout<<ans<<'\n';
	    }
	}

}
