#include <iostream>

using namespace std;

int t;
string k;

int main()
{
    cin >> t;
    
    for (int i=0; i<t; i++) {
        int n;
        cin >> k;
    
        if (k.size()%2==0) {
            n = k.size() / 2;
        } else {
            n = (k.size() / 2) + 1;
        }
        for (int i=0; i<n; i++) {
            cout << k[i];
        };
        cout << endl;
    };
    return 0;
}
