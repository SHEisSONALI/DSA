// to find unique character in a string
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int firstUniqChar(string s){
    int freq[26]={0};
    // frequency count of each character
    for(char c : s){
        freq[c-'a']++;
    }
    // find character with frequency 1
    for( int i=0; i< s.length(); i++){
        if(freq[s[i] -'a']==1){
            return i;
        }
    }
    return -1;
}
int main() {
   string s;
   cout<<" enter a lowercase string";
   cin>>s;
   
   firstUniqChar(s);
   if(firstUniqChar(s)!=-1){
       cout<<"first Unique character at index :"<<firstUniqChar<<endl;
   }else{
       cout<<"No unique Char"<<endl;
   }
    return 0;
}