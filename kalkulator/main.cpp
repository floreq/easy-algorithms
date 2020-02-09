#include <iostream>
#include <math.h>

using namespace std;

int myCalc(char mark, int x, int y)
{
    switch (mark)
    {
    case '+':
    {
        return x + y;
    }
    case '-':
    {
        return x - y;
    }
    case '*':
    {
        return x * y;
    }
    case '/':
    {
        return x / y;
    }
    case '%':
    {
        return x % y;
    }
    default:
        break;
    }
}

int main()
{
    char mark;
    int x, y;
    while (cin >> mark >> x >> y)
    {
        cout << myCalc(mark, x, y) << endl;
    }
}