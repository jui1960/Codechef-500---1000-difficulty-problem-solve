#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int r, o, c;
    cin >> r >> o >> c;
    int ans = (20-o) * 36;
    if (c + ans > r)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
