#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, sum_of_digit = 0;
        cin >> n;
        while(n > 0)
        {
            int last_digit = n % 10;
            sum_of_digit = sum_of_digit + last_digit;
            n = n / 10;
        }
        cout << sum_of_digit << endl;
    }
    return 0;
}


