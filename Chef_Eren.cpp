#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, a,b,cnt=0,cnt2=0;
	    cin>>n>>a>>b;
	    for(int i =1;i<=n;i++){
	        if(i%2==0)cnt++;
	        else cnt2++;
	    }
	    cout<<(cnt*a)+(cnt2*b)<<'\n';
	}

}
