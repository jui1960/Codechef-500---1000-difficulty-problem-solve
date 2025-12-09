// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, k;
//         cin >> a >> b >> k;

//         if (a == b)
//             cout << 0 << '\n';
//         else if (a < b)
//         {
//             int

//         }
//         else if (a > b)
//         {
//             int rs =( a - b)/k;
//             cout << rs<< '\n';
//             // int p = a-rs*k;
//             // cout<<p<<'\n';
//         }
//     }

//     return 0;
// }

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
        int a, b, k, ans = 0;
        cin >> a >> b >> k;
        int dif = abs(a - b);
        if (dif == 0)
            cout << 0 << '\n';
        else
        {
            ans = (dif + k - 1) / k;
            cout << ans << '\n';
        }
    }
    return 0;
}