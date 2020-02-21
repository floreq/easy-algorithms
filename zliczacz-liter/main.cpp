#include <iostream>
#include <string.h>

using namespace std;

int t;
const int n = 52;

void countLetters(char letters[], int lettersCount[], char k)
{
    int i = 0;
    for (int j = i; i <= n; i++, j++)
    {
        if (letters[i] == k)
        {
            lettersCount[i]++;
            break;
        }
    }
}

void coutCountOfLetters(char letters[], int lettersCount[])
{
    for (int i = 0; i < n; i++)
    {
        if (lettersCount[i] == 0)
        {
            continue;
        }
        cout << letters[i] << " " << lettersCount[i] << endl;
    }
}

int main()
{
    char letters[n] =
        {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
         'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int lettersCount[n] = {};

    cin >> t;
    while (t >= 0)
    {
        t--;

        char str[201];
        cin.getline(str, 201);

        for (int i = 0; i < 201; i++)
        {
            if (str[i] == ' ')
            {
                continue;
            }
            else if (str[i] == '\0')
            {
                break;
            }
            countLetters(letters, lettersCount, str[i]);
        }
    };
    coutCountOfLetters(letters, lettersCount);
}