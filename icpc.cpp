#include <bits/stdc++.h>
using namespace std;
#define print(a)          \
    for (auto x : a)      \
        cout << x << ' '; \
    cout << '\n';
#define debug(x) cout << #x << " " << x << endl
#define all(a) (a).begin(), (a).end()
#define sz(a) (int)(a.size())
#define int long long int
#define endl '\n'
#define ar array

const int M = 1e9 + 7;
const int N = 2e5 + 10;
// define functions here
int sum(int n)
{
    return n * (n - 1) / 2;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, n, summ, ans;
        cin >> n;
        int x = 0;
        int count = 1;
        vector<int> v,val(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> val[i];
        }
        for(int i = 1; i < n; ++i){
            if (val[i] == val[i-1])
            {
                count++;
            }
            else if (count > 1)
            {
                v.push_back(count);
                count = 1;
            }
        }
        summ = sum(n);
        ans = 0;
        for (auto it : v)
        {
            ans += sum(it);
        }
        cout << summ - ans << endl;
    }
}
