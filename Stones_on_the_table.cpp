#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

 int main(){

 int n;
  int c=0,i;

  cin>>n;

 string s;

       cin>>s;
       

    for(i=0;i<n;i++){
    if(s[i]==s[i+1]){

        c++;
    }

 }


    cout<<c;


 return 0;

 }

