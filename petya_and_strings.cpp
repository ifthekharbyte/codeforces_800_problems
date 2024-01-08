#include <bits/stdc++.h>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int i,n;
    string s,s1;

    cin>>s>>s1;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

int flag=0;

    for(i=0; i<s.length(); i++)
    {
        if(s[i]!=s1[i])
        {

            if(s[i]< s1[i])
            {
                cout<<-1;
                flag = 1;
                break;

            }
            else if(s[i]>s1[i])
            {
                cout<<1;
                flag = 1;
                break;

            }

        }
    }


   if(flag==0)
        {
            cout<<0;
        }




    }







