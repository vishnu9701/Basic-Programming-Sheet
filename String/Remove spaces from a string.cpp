#include <iostream>
using namespace std;

int main()
{
    char str[] = "g eeks for ge eeks ";
    int count = 0;

    for (int i = 0; str[i]; i++)
        if (str[i] != ' ')
        {
            str[count] = str[i];
            count++;
        }
    str[count] = '\0';
    cout << str;
}
