#include <iostream>

using namespace std;

int N, a, b;

int main()
{
    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> a >> b;
        int r = 0, a1 = 1;

        if (a<b) {
            int b1 = b;
            b = a;
            a = b1;
        }
        do {
            if (a==0 && b==0) {
                a1 = 0;
                break;
            } else if (b==0) {
                a1 = a;
                break;
            };
            r++;
            a1 = a * r;
        } while (a1%b!=0);
        cout << a1 << endl;
    };
    return 0;
}
