#include<bits/stdc++.h>
using namespace std;
int main()
{ 
int t;
cin>>t;
getchar();
map<string,int>count;
while(t--)
{
    string s;
    getline(cin,s);
    if(count[s]==0)cout<<"OK\n";else cout<<s<<count[s]<<"\n";
    count[s]++;
}
   
}