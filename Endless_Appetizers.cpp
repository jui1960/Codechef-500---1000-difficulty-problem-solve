#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,r;
	    cin>>x>>y>>r;
	    int ans = (r/30) +x;
	 
	    int ans2 = ceil ((double)ans/y);
	    cout<<ans2<<'\n';
	   // if((y>x && r==0)||(x%y==0 && r==0))cout<<1<<'\n';
	       
	   //  else if ( ans%y==0){
	   // cout<<ans<<'\n';
	   // }
	   // else cout<<ans+1<<'\n';
	   // if(((r/30)+x)%y==0){
	   //     cout<<(x/y)+1<<'\n';
	   // }
	   // else cout <<x/y<<'\n';
	    
	}

}
