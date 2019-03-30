#include <iostream>

using namespace std;

int n, a, b;

int T[11][4] = {
    {0, 0, 0, 0},
    {1, 1, 1, 1},
    {6, 2, 4, 8},
    {1, 3, 9, 7},
    {6, 4, 6, 4},
    {5, 5, 5, 5},
    {6, 6, 6, 6},
    {1, 7, 9, 3},
    {6, 8, 4, 2},
    {1, 9, 1, 9},
    {0, 0, 0, 0}
};

int main()
{
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        if (b==0) {
            cout << 1 << endl;
        } else if (b==1) {
            cout << a%10 << endl;
        } else {
            for (int i=10; i>=0; i--) {
                if ((a%10)%i==0) {
                    cout << T[i][b%4] << endl;
                    break;
                };
            };
        };  
    };
    return 0;
}