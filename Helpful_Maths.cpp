#include <bits/stdc++.h>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    int i,j;
    string s;

    cin>>s;

    for(i=0;i<s.length();i++)
        for(j=0;j<s.length();j++)
    {
        {
            if(s[i]=='+')
            {
                continue;
            }

               else if(s[i]<s[j])
                {
                  int temp = s[i];
                   s[i] = s[j];
                   s[j] = temp;
                }
            }
        }
        cout<<s;
    }



  //seond approach - take input, remove '+' . sort string, add '+' , print string.
  //


