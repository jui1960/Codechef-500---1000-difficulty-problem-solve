#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	int t;
	cin>>t;
	while(t--){
	    int x1,x2,y1,y2;
	    cin>>x1>>x2>>y1>>y2;
	    int rs = abs(x1-y1);
	    int rss = abs(x2-y2);
	    cout<<max(rs,rss)<<'\n';
	    
	}

}
