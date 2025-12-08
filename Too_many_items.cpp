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
        int n;
        cin >> n;

        int rs = n / 10;
        if (n % 10 != 0)
        {
            rs++;
        }

        cout << rs << '\n';
    }

    return 0;
}
