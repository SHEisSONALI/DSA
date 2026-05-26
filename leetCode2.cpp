// to check whether a string is panagram or not
#include <iostream>
#include <set>
using namespace std;

int main() {
  string s;
  getline(cin,s);
  
  set<char> st;
  for(char c: s){
      if(c>='a' && c<='z'){
          st.insert(c);
      }
  }
  if(st.size()==26){
      cout<<"panagram";
  }else{
      cout<<"not a panagram";
  }
    return 0;
}
