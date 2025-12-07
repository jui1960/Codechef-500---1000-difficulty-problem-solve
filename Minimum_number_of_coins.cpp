#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x%10 !=0 &&x%5!=0){
	        cout<<-1<<'\n';
	        
	    }
	    else{
	        int ans = x/10;
	        int ans2=x%10;
	       if(x==5) cout<<1<<'\n';
	       else{
	        if(x%10==0) cout<<ans<<'\n';
	        
	        else cout<<ans+1<<'\n';
	       }
	        
	    } 
	}

}
