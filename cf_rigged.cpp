#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    vector<pair<int,int>>v;
    int n;
    cin>>n;
     for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a;
        cin >> b;
        v.emplace_back(a,b);
    }
    int flag=0;
     for(int i=1;i<n;i++) {
        //cout<<v[0].first<<" "<<v[0].second<<endl;
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        if(v[0].first<=v[i].first&&v[0].second<=v[i].second)
        {
            flag=1;
            break;

        }
    }
    if(flag==1)
    cout <<"-1\n";
    else
    cout<<v[0].first<<endl;
 }
}