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
   string ans;
   while(t--)
   {
    string s,s1,s3;
    cin>>s;
    ll n,found;
    cin>>n;
    s1+=s;
    sort(s1.rbegin(),s1.rend());
   s3+=s;
   for(int i=0;i<s1.size();i++)
   {
     found=s.find(s1[i]);
     s.erase(found,1);
     s3+=s;
   }
   cout<<s3[n-1];
   //cout<<s3;
   }
  // cout<<endl;
}