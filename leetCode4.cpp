// C++ program to count frequency of characters in a string
#include <iostream>
using namespace std;
int main() {
    string s="aabbabc";
    int freq[256]={0};
    for(char c: s){
        freq[c]++;
    }
    for(char c: s){
        if (freq[c] != 0) {
            cout<<c<<freq[c];
            freq[c] = 0;  
        }
    }
    return 0;
}
