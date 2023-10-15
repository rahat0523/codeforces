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
   while (t--)
   {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int count=0,count1=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0&&v[i]%2!=0)
        count++;
        else if(i%2!=0&&v[i]%2==0)
        count1++;
    }
    if(count==count1)
    cout<<count<<endl;
    else
    cout<<"-1\n";
   }
     
}