#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    getchar();
    for(int i=1;i<=n;i++)
    {
        string s;
        getline(cin,s);
        if(s=="Tetrahedron")
        count+=4;
        else if(s=="Cube")
        count+=6;
        else if(s=="Octahedron")
        count+=8;
        else if(s=="Dodecahedron")
        count+=12;
        else if(s=="Icosahedron")
        count+=20;
    }
    cout<<count<<"\n";
}