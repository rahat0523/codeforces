#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a,temp;
        for(int i=0;i<n;i++)
        {
        int r;
        cin>>r;
        a.push_back(r);
        }
        for(int i=0;i<n;i++)
        {
        temp.push_back(a[i]);
        }
        sort(temp.begin(),temp.end());
        int flag=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]%2==0&&temp[i]%2!=0||a[i]%2!=0&&temp[i]%2==0)
            {
                flag=1;
                break;
            }   
        }
        if(flag==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }

}    