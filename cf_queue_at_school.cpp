#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--) {
        int i = 0;
        while(i < s.size()) {
            if(s[i] == 'B' && s[i + 1] == 'G') {
                s[i] = 'G';
                s[i + 1] = 'B';
                i += 2;
            }
            else
                i++;
        }
    }
    cout << s;

    return 0;
}