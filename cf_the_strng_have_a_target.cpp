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
      string s;
      cin>>s;
      char c=*min_element(s.begin(),s.end());
      int k=0;
      for(int i=0;i<n;i++)
      {
         if(s[i]==c)
         k=i;
      }
      rotate(s.begin(),s.begin()+k,s.begin()+k+1);
      cout<<s<<endl;
   }
}