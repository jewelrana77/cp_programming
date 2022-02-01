
#include<bits/stdc++.h>
using namespace std;
//const 1<=n<=100;
int main(){
    int n;
    int m=47;
    cin>>n;
    long long fact=1;
    for(int i=2;i<=n;++i){
        fact=(fact*i)%m;
    }
    cout<<fact<<endl;
//int a,b,m;
//int add,mul,sub,div;
//cin>>a>>b>>m;
//add=((a%m)+(b%m))%m;
//mul=((a%m)*(b%m))%m;
//sub=((a%m)-(b%m)+m)%m;
//cout<<add<<mul<<sub<<endl;
return 0;
//div=((a%m))*((b))


}
