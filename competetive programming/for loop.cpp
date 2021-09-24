#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i;
    char *rep[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        if(i > 9)
        {
            if(i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }

        }
        else
        {
            cout << rep[i] << endl;
        }
    }

    return 0;
}

