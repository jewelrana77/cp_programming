#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int n,m;
    cin>>n>>m;
    int result=0;
    int count=0;

    string arr[n][m];
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cin>>arr[i][j];
                }
        cout<<arr[i][j]<<endl;
    }
    cout<<"/n"<<endl;
    return 0;
}

