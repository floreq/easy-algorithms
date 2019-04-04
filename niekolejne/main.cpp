#include <iostream>

using namespace std;

int n;

int main()
{
    cin >> n;
    
    if (n==0) {
        cout << 0 << endl;
    } else if (n<3) {
        cout << "NIE";
    } else {
        for (int i=n-1; i>=0; i-=2) {
            cout << i << " ";
        };
        for (int i=n; i>=0; i-=2) {
            cout << i << " ";
        };
    };
    return 0;
}
