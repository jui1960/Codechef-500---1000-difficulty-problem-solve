#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int an1=x/y;
	    int an2 =x%y;
	    if(y>x) cout<<x<<'\n';
	    else if (x%y==0) cout<<an1<<'\n';
	    else cout <<an1+an2<<'\n';
	}

}
