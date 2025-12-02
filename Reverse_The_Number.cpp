#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        int i = 0;
        while (i < s.size() && s[i] == '0')
        {
            i++;
        }
        string reversed = s.substr(i);
        cout << reversed << '\n';
    }
}