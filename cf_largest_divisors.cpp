#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,max=0,count=0;
        cin>>n;
        for(int i=1;i<10000;i++)
        {
            if(n%i==0)
            count++;
            else 
            count=0;
            if(count>max)
            max=count;
        }
        cout<<max<<endl;
    }
}
