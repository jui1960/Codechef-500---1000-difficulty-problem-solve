#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,ans=0;
	    cin>>n;
	    std::vector<int>v(n) ;
	    for(int i =1;i<=n;i++){
	        cin>>v[i];
	    	        
	    }
	    for(int i =1;i<=n;i++){
	            if(v[i]>v[ans]){
	            ans =i;
}
	    }
	    cout<<ans<<endl;
	}

}
