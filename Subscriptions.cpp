#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    
	    if(n%6==0){
	        int ans = n/6;
	        cout<<ans*x<<'\n';
	        
	    }
	    else{
	         int ans = n/6;
	        cout<<(ans+1)*x<<'\n';
	        
	    }
	    
	}

}