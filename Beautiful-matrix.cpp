#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6][6];
    int i,j,result=0,r=0;
    int row,col;


    for(i=1;i<=5;i++)

    {
        for(j=1;j<=5;j++)
       {
           cin>>a[i][j];

       }

    }

 cout<<"\n";

    for(i=1;i<=5;i++)

    {
        for(j=1;j<=5;j++)
       {
         if(a[i][j]==1)
          {
              row = abs(3-i);
              col = abs(3-j);
              result = row+col;


          }

       }

    }

    cout<<result;
}
