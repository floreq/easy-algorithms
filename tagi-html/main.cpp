#include <iostream>
#include <string>

using namespace std;

void convert(string &str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '<')
        {
            while (str[i] != '>')
            {
                str[i] = toupper(str[i]);
                i++;
            }
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    string str;
    while (getline(cin, str))
    {
        convert(str);
        cout << str << endl;
    }
}