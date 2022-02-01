#include<bits/stdc++.h>
using namespace std;
//constrants 1<=N<=10^5 1<=a[i]<=10^9 1<=Q<=10^5 1<=L,R<=N//
const int N=10e5+10;
int a[N];
int pf[N];

int main()
{
int n;
cin>>n;
int a[n];
for(int i=1; i<=n;++i)
{
    cin>>a[i];

}
int q;
cin>>q;
while(q--){
    int l,r;
    cin>>l>>r;
    long long sum=0;
   for(int i=l; i<=r; ++i){
    sum+=a[i];
   }
   cout<<sum<<endl;
}
return 0;
}
