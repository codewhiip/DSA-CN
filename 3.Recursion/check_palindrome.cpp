#include<iostream>
using namespace std;

bool palindrome(string str, int s, int e) {
    if(s>=e) return true;
    else if(str[s]==str[e]) return palindrome(str, s+1, e-1);
    else false;
}

int main() {
    string s; cin>>s; int len=s.length(); 
    cout<<palindrome(s, 0, len-1)<<endl;
}