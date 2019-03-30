#include <iostream>
#include <cmath>

using namespace std;

int d, n;

int main()
{
    cin >> d;
    for (int i=0; i<d; i++) {
        int N = 1;
        cin >> n;

        if (n>=10) {
            cout << 0 << " " << 0 << endl;
        } else {
            do {
                if (n<=1) {
                    N = 1;
                    break;
                }
                N *= n;
                n -= 1;
            } while (n>1);
            cout << int((N%100)/10) << " " << N%10 << endl;
        };
    }
    return 0;
}
