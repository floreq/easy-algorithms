#include <iostream>
#include <math.h>

using namespace std;

int t;
const int tSize = 1001;

int strLength(char *str)
{
    int l = 0;
    while (*(str++) != '\0')
    {
        l++;
    }
    return l;
}

char *string_merge(char *s1, char *s2)
{
    int s1Length = strLength(s1);
    int s2Length = strLength(s2);
    int mainLength = 0;
    if (s1Length <= s2Length)
    {
        mainLength = s1Length * 2;
    }
    else
    {
        mainLength = s2Length * 2;
    }
    char *newStr = new char[mainLength + 1];
    int i = 0;
    int j = 0;
    while (i < mainLength)
    {
        *(newStr + i) = *(s1 + j);
        i++;
        *(newStr + i) = *(s2 + j);
        i++;
        j++;
    }
    *(newStr + i) = '\0';
    return newStr;
}

int main()
{
    cin >> t;
    do
    {
        t--;

        char s1[tSize], s2[tSize], *s;
        cin >> s1 >> s2;
        strLength(s1);
        s = string_merge(s1, s2);
        cout << s << endl;

        delete[] s;
    } while (t);
}