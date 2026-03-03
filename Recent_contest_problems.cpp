#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int startCount = 0;
        int ltimeCount = 0;

        for (int i = 0; i < N; i++) {
            string contest;
            cin >> contest;

            if (contest == "START38") {
                startCount++;
            } else if (contest == "LTIME108") {
                ltimeCount++;
            }
        }

        cout << startCount << " " << ltimeCount << endl;
    }

    return 0;
}