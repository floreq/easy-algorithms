#include <iostream>

using namespace std;

int t, n, number, sum;

int main()
{
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> number;
            sum += number;
        };
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}
