#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,a,b;
	    cin>>x>>y>>a>>b;
	    if(x<=a&&y<=b){
	        cout<<"POSSIBLE\n";
	    }
	    else cout<<"IMPOSSIBLE\n";
	}

}
