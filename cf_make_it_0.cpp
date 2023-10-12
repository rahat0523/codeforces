#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        vector<pair<int, int>> ans;
        for(int i=0;i<n;)
        {
            int xr=0,k=i;
            for(int j=i;j<n;j++) // Changed 'int j=0' to 'int j=i'
            {
                xr^=v[j];
                if(xr==0)
                    k=j;
            }
            ans.push_back({i,k});
            i=k+1;
        }
        cout<<ans.size()<<"\n";
        for (auto i : ans)
        {
            cout<<i.first+1<<" "<<i.second+1<<"\n";
        }
    }
    return 0;
}