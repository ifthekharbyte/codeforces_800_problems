#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,a,b;

    cin>>a>>b;

    for(i=0;i<b;i++)
    {
        if(a%10!=0)
        {
            a--;
        }
        else if(a%10==0)
        {
            a/10;
        }
    }

    cout<<a;
}
