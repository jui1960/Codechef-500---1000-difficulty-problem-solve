#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a==b)cout<<"YES\n";
	    else if(a>b){
	        if(a-d<=b)cout<<"YES\n";
	        else cout<<"NO\n";
	    }
	    else{
	        if(a+c>=b)cout<<"YES\n";
	        else cout<<"NO\n";
	    }
	}

}
