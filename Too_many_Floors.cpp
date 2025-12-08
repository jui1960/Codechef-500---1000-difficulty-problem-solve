#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        double chef = x / 10;
        double chefina = y / 10;
        if(x%10!=0) chef++;
        if(y%10 != 0) chefina++;
        // cout<< chef<<" "<<chefina<<'\n';
        cout << abs(chef - chefina) << '\n';
    }

    return 0;
}
