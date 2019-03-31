#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int t, n, rn, x;

int main()
{
    cin >> t;
    for (int i=0; i<t; i++) {
        x = 0;
        cin >> n;
        while (n!=rn) {
            vector <int> N;
            int l = n;
            rn = 0;
            do {
                N.insert(N.begin(), l%10);
                l /= 10;
            } while (l!=0);
            for (int i=0; i<N.size(); i++) {
                rn += N[i] * round(pow(10, i));
            };
            if (n!=rn) {
                n += rn;
                x++;
            } else {
                break;
            };
        };
        cout << n << " " << x << endl;
    };
    return 0;
}
