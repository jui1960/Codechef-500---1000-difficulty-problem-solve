#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int d =y-x,a=d/8,b=d%8;
	    if(x<y){
	        if(d<8)cout<<1<<'\n';
	        else{
	            if(b>0)cout<<a+1<<'\n';
	            else cout<<a<<'\n';
	        }
	        
	        
	    }else std::cout << 0 << std::endl;
	    
	}

}
