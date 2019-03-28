#include <iostream>
#include <cmath>

using namespace std;

int T, N, M, S;

int main()
{
    cin >> T;
    int d = 86400;

    for (int i=0; i<T; i++) {
        cin >> N >> M;
        int c = 0;

        for (int i=0; i<N; i++) {
            cin >> S;
            c += floor(d/S);
        }
        cout << ceil((double)c/M) << endl;
    }
    return 0;
}
