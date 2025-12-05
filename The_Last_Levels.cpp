#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int ans = x/3;
	    if(x<=3)cout<<x*y<<'\n';
	    else{
	        if(x%3==0){
	           
	            cout<<(x*y)+(ans-1)*z<<endl;
	        }else{
	           
	            cout<<(x*y)+(ans*z)<<endl;
	        }
	    }
	}

}
