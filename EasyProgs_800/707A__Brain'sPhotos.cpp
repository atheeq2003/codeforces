#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int n, m;
char x;
int main()
{
    cin >> n >> m;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (x != 'B' && x != 'W' && x != 'G')
        {
            cout << "#Color";
        }
    else
    {
        cout << "#Black&White";
    }
}
}