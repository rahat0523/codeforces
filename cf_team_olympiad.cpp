#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll n,a,count=0;
   cin>>n;
   vector<int>v1;
   vector<int>v2;
   vector<int>v3;
   while(n--)
   {
    count++;
     cin>>a;
     if(a==1)
     v1.push_back(count);
     else if(a==2)
     v2.push_back(count);
     else if(a==3)
     v3.push_back(count);
   }  
   int b=v1.size(),c=v2.size(),d=v3.size();
   if(b==0||c==0||d==0)
   cout<<"0\n";
   else
   {
    int mn=min(b,c);
    mn=min(mn,d);
    cout<<mn<<endl;
    for(int i=0;i<mn;i++)
    cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
   }
}