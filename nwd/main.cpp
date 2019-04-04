#include <iostream>

using namespace std;

int nwd(int a, int b) {
    int d = 1;

    if (b>a && a!=0) {
        int a1 = a;
        a = b;
        b = a1;
    } else if (a==0) {
        a = b;
    } else if (b==0) {
        b = a;
    };
    for (int i=1; i<=b; i++) {
        if (a%i==0 && b%i==0) {
            d = i;
        };
    };
    return d;
}

int t, a, b;

int main()
{
    cin >> t;
    
    for (int i=0; i<t; i++) {
        cin >> a >> b;
        cout << nwd(a, b) << endl;
    };
    return 0;
}
