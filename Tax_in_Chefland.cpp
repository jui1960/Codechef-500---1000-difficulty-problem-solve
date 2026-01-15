#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
   int n;
   cin>>n;
   if(n>100){
       int ans = n-10;
       cout<<ans<<'\n';
   }
   else cout<<n<<'\n';
}

}