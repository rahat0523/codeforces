#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,a;
    while(1){
    cin>>m>>n>>a;
    double x=ceil(m*1.00/a*1.00);
    double y =ceil(n*1.00/a*1.00);
     
     printf("%.0lf\n",x*y);
     break;
     
}
}