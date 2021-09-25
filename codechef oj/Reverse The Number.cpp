#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        int n, last_digit, rev = 0;
        cin >> n;
        while (n != 0)
        {
            last_digit = n % 10;
            rev = rev * 10 + last_digit;
            n = n / 10;
        }
        cout << rev << endl;
    }

    return 0;
}
