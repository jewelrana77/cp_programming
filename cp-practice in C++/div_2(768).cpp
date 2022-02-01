#include<iostream>
using namespace std;
int largest_pro()
{

}
void min_pro()
{


}
int main()
{
    int tt,n,temp_pro;
    cin>>tt;
    while(tt--)
    {
        cin>>n;
        int *a=new int[n];
        int *b=new int[n];
        for(int i=0; i<n; ++i)
            cin>>a[i];
        for(int i=0; i<n; ++i)
            cin>>b[i];
            int min_pro=largest_pro(a,b,n);
            for(int i=0;i<n;++i){
                if(a[i]<b[i])
                swap(a,b,n,i)
                temp_pro=largest_pro(a,b,n)
            }


    }

return 0;
}
