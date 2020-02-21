#include <iostream>

using namespace std;

int t;

char checkPesel(char pesel[12])
{
    int sum = 0;
    for (int i = 0; i < 11; i++)
    {
        switch (i)
        {
        case 1:
        case 5:
        case 9:
        {
            sum += (pesel[i] - '0') * 3;
            break;
        }
        case 2:
        case 6:
        {
            sum += (pesel[i] - '0') * 7;
            break;
        }
        case 3:
        case 7:
        {
            sum += (pesel[i] - '0') * 9;
            break;
        }
        default:
            sum += pesel[i] - '0';
        }
    }
    if (sum % 10 == 0)
    {
        return 'D';
    }
    else
    {
        return 'N';
    }
}

int main()
{
    cin >> t;
    while (t > 0)
    {
        t--;

        char pesel[12];
        cin >> pesel;
        cout << checkPesel(pesel) << endl;
    }
}