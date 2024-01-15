#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,n,c=0;


    cin>>n;

    string s = to_string(n);



    for(i=0;i<s.length();i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            c++;
        }
    }

    if(c==7 || c==4)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


}
