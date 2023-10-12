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
    int n,mul=1;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++)
    {
      mul*=a[i];
    }
    mul=mul*(a[0]+1);
    cout<<mul<<endl;
    
 }   
}