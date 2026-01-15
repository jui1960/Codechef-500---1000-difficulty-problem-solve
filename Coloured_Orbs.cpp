#include <bits/stdc++.h>
using namespace std;

int main() {
// your code goes here
int x,y;
cin>>x>>y;
if(x>y){
   int ans = (y*5)+(x-y)*1;
   cout<<ans<<'\n';
}
else if(x<y){
   int ans = (x*5)+(y-x)*2;
   cout<<ans<<'\n';
}
else cout<<x*5<<'\n';

}