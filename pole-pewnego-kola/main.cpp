#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double R, d, r;

int main()
{
    cin >> R >> d;
    r = pow(R, 2) - pow(d/2, 2);
    cout << fixed << setprecision(2)<< r * 3.141592654;

    return 0;
}
