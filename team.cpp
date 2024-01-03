#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n,a[3],c=0,i,sum=0,j;

    cin>>n;

  for(j=0;j<n;j++){
     for (i = 0; i < 3; i++) {

        cin >> a[i];

        sum += a[i];

    }


         if(sum>=2)
    {
        c++;
    }

     sum=0;
  }
  cout<<c;

}




