#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
vector<int>v(n);
int even =0,odd=0;
for(int i =0;i<n;i++){
    cin>>v[i];
    if(v[i]%2==0)even++;
    else odd++;
}
if(even>odd)cout<<"READY FOR BATTLE";
else cout<<"NOT READY";

}
