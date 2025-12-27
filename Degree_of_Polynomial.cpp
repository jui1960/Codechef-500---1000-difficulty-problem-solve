#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    std::vector<int>v(n) ;
	    for(int i =0;i<n;i++){
	        cin>>v[i];
	       
	    }
	    for(int i =n-1;i>=0;i--){
	         if(v[i]!=0){
	            cout<<i<<"\n";
	            break;
	        }
	    }
	}

}
