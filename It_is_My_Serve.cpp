#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int ans = a+b;
	    if(ans==0)cout<<"Alice\n";
	    else{
	        ans = ans/2;
	        if(ans%2!=0) cout<<"Bob\n";
	        else cout<<"Alice\n";
	    }
	    
	}

}
