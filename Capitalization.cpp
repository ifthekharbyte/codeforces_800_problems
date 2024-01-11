#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i;

    string s;

    cin>>s;

    for(i=0;i<s.length();i++)
    {
        if(i==0)
        {
            s[i]=toupper(s[i]);
        }
        else
        {
            continue;
        }

    }

    cout<<s;
}

