#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int w, x, y, z, mx = 0;
        cin >> w >> x >> y >> z;

        if (w >= (x + y + z))
            cout << 0 << '\n';

        else
        {
            mx = max(x, y);
            if (w <= (x + y - mx))
                cout << 1 << '\n';
            else
                cout << 2 << '\n';
        }
    }
}