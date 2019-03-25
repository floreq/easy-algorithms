#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double a, b, c, x;

int main()
{
    cin >> a >> b >> c;
    x = (c-b)/a;

    if (isinf(x)) {
        cout << "BR";
    } else if (isnan(x)) {
        cout << "NWR";
    } else {
        cout << fixed << setprecision(2) << x << endl;
    }

    return 0;
}
