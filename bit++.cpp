#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int c=0,n,i;

    cin>>n;

 for(i=0;i<n;i++)
 {
     cin >> s;


    if (s == "++X" || s == "X++" ) {
         c++;
    }
    else
    {
        c--;
    }


 }

 cout<<c;





}
