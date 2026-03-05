#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        long long U, V, A, S;
        cin >> U >> V >> A >> S;

        long long v2 = U*U - 2*A*S;

        if (v2 <= V*V)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}