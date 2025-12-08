#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    cin>>n>>s;
	    for(int i =0;i<n;i++){
	        if(s[i]=='A')s[i]='T';
	        else if (s[i]=='T') s[i]='A';
	        else if(s[i]=='C') s[i]='G';
	        else s[i]='C';
	    }
	    std::cout << s << std::endl;
	}

}
