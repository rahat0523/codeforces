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
        int k=0;
 char s[11][11];
 for(int i=1;i<=10;i++)
 {
    for(int j=1;j<=10;j++)
    cin>>s[i][j];
 }
 for(int i=1;i<=10;i++)
 {
    for(int j=1;j<=10;j++)
    {
         if(s[i][j]=='X')
         {
            if(i<=5)
            {
                if(j<=5)
                k+=min(i,j);
                else
                k+=min(i,11-j);
            }
           else{
            if(j<=5)
                k+=min(11-i,j);
                else
                k+=min(11-i,11-j);
         }
         }
    }
 }
 cout<<k<<endl;

    }

}