#include<bits/stdc++.h>
using namespace std;
void  printf(int n)

{
    n++;
    cout<<n;
    cout<<n++<<endl;
    cout<<n<<endl;

}
int sum(int a,int b)
{
    //cin>>a>>b;
    cout<<a<<" "<<b<<endl;

}
int digit_num(int f)
{
    int digit_num=0;
    while(f)
    {
        digit_num=digit_num+f%10;
        f=f/10;

    }
return digit_num;
}
int main()
{
    int q,w,h;
    cin>>q>>w>>h;
    cout<<digit_num(q)+digit_num(w)+digit_num(h);

}
