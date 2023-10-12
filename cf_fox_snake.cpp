#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,count=0;
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        if(i%2==0)
        count++;
        for(int j=1;j<=c;j++)
        {
            if(i%2!=0)
            cout<<"#";
            else
            {
                if(count%2!=0)
             {
                if(j!=c)
                cout<<".";
               else
               cout<<"#";
            }
            else
            {
               if(j==1)
               cout<<"#";
               else
                cout<<".";
            }
        }
        }
     cout<<"\n";
    }
}
