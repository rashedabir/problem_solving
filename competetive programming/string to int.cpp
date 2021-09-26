#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stringstream string_value(s);

    int x = 0;
    string_value >> x;

    cout << "Value of x : " << x;

    return 0;
}
