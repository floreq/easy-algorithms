#include <iostream>
#include <math.h>

using namespace std;

int d;

double pregnancyLength(double x, double y, double z)
{
    double n = ((x + y - (z * y)) / (z - 1)) * 12;
    return -n;
}

int main()
{
    cin >> d;
    do
    {
        d--;

        double x, y, z;
        cin >> x >> y >> z;

        cout << round(pregnancyLength(x, y, z)) << endl;
    } while (d);
}