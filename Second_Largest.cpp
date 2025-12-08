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
	}

}
