#include<bits/stdc++.h>
using namespace std;

int main() {
    string *sp= new string; // string pointer
    *sp="stringing";
    cout<<sp<<' '<<*sp<<endl;

    string str="abcdef";       // string declaration
    string s1; s1="def";    // string initialisation
    string s2; cin>>s2; 

    string s3; getline(cin, s3);       // getline function

    string s4="trisha"; 
    s4[0]='k';                  // indexing

    string s5=s2+s4;            // concatenation

    string s6=s1.substr(2, 6);  // substring 

    bool found = str.find("de");    // find function

    cout<<str<<' '<<s1<<' '<<s2<<' '<<s3<<' '<<s4<<' '<<s5<<' '<<s2.length()<<' '<<s2.substr(3)<<' '<<s6<<' '<<found<<endl;
}