#include<bits/stdc++.h>
using namespace std;
int main()
{
       long long  n,m;
        cin>>n>>m;
        vector<int>v(n);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        vector<int>pf(n);
        for(int i=1; i<=n; i++)
        {
            if(v[i]>v[i+1])
            {
                pf[i]=v[i]-v[i+1];
            }
            else
            {
                pf[i]=0;
            }
        }
       vector<int>post(n);
       long long d=n-1;
       for(int i=n;i>1;i--){
        if(v[i]>v[i-1]){
            post[d]=v[i]-v[i-1];
            d--;
        }
        else{
            post[d]=0;
            d--;
        }
       }
       while(m--){
        long long a,b;
        cin>>a>>b;
        if(a<b){
            long long ans=accumulate(pf.begin()+a,pf.begin()+b,0);
            cout<<ans<<endl;
        }
        if(a>b){
            long long  ans_2=accumulate(post.begin()+b,post.begin()+a,0);
            cout<<ans_2<<endl;
        }
       }
    return 0;
}
