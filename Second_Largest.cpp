#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int ans = a+b+c -max({a,b,c})-min({a,b,c});
	    cout<<ans <<'\n';




	// 	 int sum = a+b+c;
	//    int mx = max({a,b,c});
	//    int mn = min({a,b,c});
	//    int ans = sum - (mn+mx);
	//    cout<<ans<<'\n';
	    
	}

}
