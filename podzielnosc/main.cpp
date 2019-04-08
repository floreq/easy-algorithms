#include <iostream>

using namespace std;

int t, n, x, y;

int main()
{
    cin >> t;
    
    for (int i=0; i<t; i++) {
        cin >> n >> x >> y;
        for (int i=2; i<n; i++) {
            if (i%x==0 && i%y!=0) {
                cout << i << " ";
            };
        };
        cout << endl;
    };
    return 0;
}
