#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
   ios_base::sync_with_stdio (0);
   cin.tie (0);
   cout.tie (0);
   ll n,a,b,count=0,count2=0;
   cin>>n;
   ll sum=n;
   while(n--)
   {
     cin>>a>>b;
     if(a>b)
     count++;
     if(a==b)
     count2++;
   }  
   if(count>(sum-count-count2))
   cout<<"Mishka\n";
   else if(count<(sum-count-count2))
   cout<<"Chris\n";
   else
   cout<<"Friendship is magic!^^\n";
}