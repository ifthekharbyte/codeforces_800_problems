#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,x,ans=0;

    cin>>x;

     if(x<=5)
        {
            cout<<1;
            return 0;
        }
     else{

    while(x>0)
    {
       if(x<=5)
        {
            cout<<ans+1;
            break;
        }
        else
        {
            x=x-5;
            ans++;
        }

    }
     }

}
