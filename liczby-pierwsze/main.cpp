#include <iostream>
#include <cmath>

using namespace std;

int n, number;

int main()
{
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> number;
        if (number==1) {
            cout << "NIE" << endl;
        } else if (number==2 || number==3) {
            cout << "TAK" << endl;
        } else {
            for (int i=2; i<=sqrt(number); i++) {
                if (number%i==0) {
                    cout << "NIE" << endl;
                    break; 
                } else if (i==floor(sqrt(number))) {
                    cout << "TAK" << endl;
                    break;
                };
            };
        };
    };
    return 0;
}
