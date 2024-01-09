#include<bits/stdc++.h>
using namespace std;

 int main(){

 string s;
 cin >> s;
 int c=0,i,j,temp=0;

 for(i=0; i<s.length();i++){
        for(j=0; j<s.length(); j++){


    if (s[i] > s[j]){

        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
 }
 }
 }
 for(i=0;i<s.length();i++){
    if(s[i]!=s[i+1]){

        c++;
    }

 }
 if(c%2!=0){
    cout<<"IGNORE HIM!" << endl;
 }
 else{
    cout << "CHAT WITH HER!"<< endl;
 }





 return 0;

 }
