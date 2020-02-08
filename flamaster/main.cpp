#include <iostream>

using namespace std;

int c;

void countLetters(char *str)
{
    char *w = str;
    int i = 0;
    int tmp = w[0];
    int count = 1;
    while (w[i] != '\0')
    {
        if (tmp == w[i + 1])
        {
            count++;
        }
        else
        {
            cout << w[i];
            if (count == 2)
            {
                cout << w[i];
            }
            else if (count > 2)
            {
                cout << count;
            }
            count = 1;
        }
        i++;
        tmp = w[i];
    }
}

int main()
{
    cin >> c;
    while (c != 0)
    {
        c--;
        char str[200];
        cin >> str;
        countLetters(str);
        cout << endl;
    }
}