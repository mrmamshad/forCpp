#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = i + 1; j > 0; j--)
        {
            cout << ch;

            ch--;
        }
        cout << endl;
    }
    return 0;
}