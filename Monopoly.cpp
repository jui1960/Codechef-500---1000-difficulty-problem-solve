#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a>(b+c+d)|| b>(a+c+d)||c>(a+b+d)||d>(a+b+c))cout<<"Yes\n";
	    else cout<<"No\n";
	    
	    
	}

}
