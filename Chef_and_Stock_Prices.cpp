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
        double s, a, b, c;
        cin >> s >> a >> b >> c;
        double ans = s + (s * c / 100);

        if (ans >= a && ans <= b)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}