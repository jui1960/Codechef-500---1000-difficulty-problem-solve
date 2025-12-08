#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b;
	    cin>>x>>y>>a>>b;
	    if((x==a && y==b)||(x==b&&y==a))cout<<0<<'\n';
	    else if((x==a||x==b))cout<<1<<'\n';
	    else if((y==a||y==b))cout<<1<<'\n';
	    else cout<<2<<'\n';
	    
	    
	}

}
