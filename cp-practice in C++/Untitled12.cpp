#include<bits/stdc++.h>
using namespace std;
const int  m=47;
int main()
//1<=T<=100000;
//1<=N<=100000;
//1<=a[i]<=100000;
//print answer modula M;
{int t;
cin>>t;
while(t--)
{
int n;

cin>>n;
long long fact=1;
for(int i=2; i<=n; ++i)
{
    fact=(fact*i)%m;
}
cout<<fact<<endl;
}


    return 0;
}
