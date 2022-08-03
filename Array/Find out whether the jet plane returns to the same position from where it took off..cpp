#include <iostream>
using namespace std;
int main()
{
    string s = "NESW";

    int x = 0, y = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'N')
        {
            y++;
        }
        else if (s[i] == 'E')
        {
            x++;
        }

        else if (s[i] == 'W')
        {
            x--;
        }
        else if (s[i] == 'S')
    }

    if (x == 0 && y == 0)
        cout << "Returend Succesfully";
    else
        cout << "Not returned ";
}
