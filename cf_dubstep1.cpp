#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    string s;
    cin >> s;

    for (int i = 0;i < s.length();i++)
    {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i + 2] == 'B')
        {
            s.erase(i, 2);
            cout << " ";
        }
        else
        {
            cout << s[i];
        }
    }
}








