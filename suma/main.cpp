#include <iostream>

using namespace std;

int main()
{
    int number;
    int x = 0;
    
    while (scanf("%d",&number) != EOF) {
        x = x + number;
        cout << x << endl;
    };
}
