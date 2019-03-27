#include <iostream>

using namespace std;

double A, B, C, d;

int main()
{
    for (;cin >> A >> B >> C;) {
        d = (B * B) - (4 * A * C);

        if (d>0) {
            cout << 2 << endl;
        } else if (d==0) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}