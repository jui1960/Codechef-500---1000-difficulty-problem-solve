#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        if (N == 1) {
            cout << -1 << endl;
            continue;
        }

        if (N % 2 == 0) {
            for (int i = 0; i < N / 2; i++) {
                cout << 1 << " " << -1 << " ";
            }
        } else {
            cout << "1 2 -3 ";
            for (int i = 0; i < (N - 3) / 2; i++) {
                cout << "1 " << -1 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}