#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int i,k,w,n,sum=0;

    cin>>k>>w>>n;

    for (i=1; i<=n; i++)
    {
      sum += k*i;

    }
    if (sum<=w)
    {
        cout<<"0"<<endl;
    }
    else {
        cout<<sum-w<<endl;
    }

    return 0;
}