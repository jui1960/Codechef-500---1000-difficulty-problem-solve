#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N >= 0 && N <= 9)
        cout << "1" << endl;
    else if (N >= 10 && N <= 99)
        cout << "2" << endl;
    else if (N >= 100 && N <= 999)
        cout << "3" << endl;
    else if (N >= 1000 && N <= 1000000)
        cout << "More than 3 digits" << endl;
    else
        cout << "Invalid input" << endl;  // just in case

    return 0;
}