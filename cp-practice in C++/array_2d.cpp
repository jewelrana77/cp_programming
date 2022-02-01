#include<bits/stdc++.h>
using namespace std;
const int k=1e7;
    int s[k];
int main(){

    s[k-1]=7;
    cout<<s[k-1];
int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;++i){
    for(int j=0;j<m; ++j)
    {
        cin>>a[i][j];
    }
}
for(int i=0;i<n;++i){
    for(int j=0;j<m; ++j)
    {
        cout<<a[i]<<" "<<a[j]<<"  ";
    }
}
cout<<endl;
return 0;
}
