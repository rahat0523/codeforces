#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<set<int>>st;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            set<int>s;
            for(int j=0;j<a;j++)
            {
                int r;
                cin>>r;
                s.insert(r);
            }
            st.push_back(s);
        }
        int mx=0;
        for(int i=0;i<n;i++)
        {
            set<int>at;
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    at.insert(st[j].begin(),st[j].end());
                }
            }
            mx=max(mx,static_cast<int>(at.size()));
        }
        //cout<<mx<<endl;
        cout<<(mx==0 ? 0:mx-1)<<endl;
    }
}