#include <iostream>

using namespace std;

int t, v1, v2;
int s=10;

int main()
{
    cin >> t;
    while (t>=1) {
        t--;
        cin >> v1;
        cin >> v2;
        int s=v1*v2;
        cout << (2*s)/(s/v1+s/v2) << endl;
    }

    return 0;
}
