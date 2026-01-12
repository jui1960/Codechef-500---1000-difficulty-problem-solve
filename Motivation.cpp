#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,mx=0;
	    cin>>n>>x;
	    
	    while(n--){
	        int si,ri;
	        cin>>si>>ri;
	        if(x>=si) mx = max(mx,ri);
	        
	    }
	    cout<<mx<<'\n';
	}

}
