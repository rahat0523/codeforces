#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int min=(a[1]-a[0]);
        //cout<<min<<endl;
        if(is_sorted(a,a+n))
        {
            for(int i=0;i<n-1;i++)
            {
                if((a[i+1]-a[i])<min)
                min=a[i+1]-a[i];
            }
        cout<<(min/2)+1<<endl;
        }
        else
        {
            cout<<"0\n";
           // continue;
        }
    }
}