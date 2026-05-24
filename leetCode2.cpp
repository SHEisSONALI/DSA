// to check whether two strings are anagram or not
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
   string s1,s2;
   cout<<" enter string 1";
   cin>>s1;
   cout<<"enter string 2";
   cin>>s2;
   
   if(s1.length()!=s2.length()){
       cout<<"Not an anagram";
   }
   
  sort(s1.begin(),s1.end());
  sort(s2.begin(),s2.end());
 
 if(s1==s2){
     cout<<"Strings are anagram";
 }else{
     cout<<"Strings are not anagram";
 }
    return 0;
}