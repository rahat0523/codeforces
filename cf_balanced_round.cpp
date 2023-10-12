#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;

        if(n == 1){
            int a;
            cin >> a;
            cout << 0 << "\n";
            continue;
        }

        vector<int> v(n);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int maxcount = 0;
        int currcount = 1;
        for(int i = 1; i < n; ++i){
            if(v[i] - v[i-1] <= k){
                currcount++;
            }
            else{
                currcount = 1;
            }
            maxcount=max(maxcount,currcount);
        }
        cout << n-maxcount << "\n";
    }
    return 0;
}