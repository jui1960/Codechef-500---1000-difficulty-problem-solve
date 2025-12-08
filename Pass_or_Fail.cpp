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
        int n, x, p;
        cin >> n >> x >> p;
        int rs = n - x;
        int total = 3 * x;
        int pass = total - rs;

        if (pass >= p)
        {
            cout << "PASS\n";
        }
        else
        {
            cout << "FAIL\n";
        }
    }

    return 0;
}
