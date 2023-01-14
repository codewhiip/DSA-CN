#include<iostream>
using namespace std;

string replacePI(string str) {
    if(str.length()<=1) return str;
    if(str[0]=='p' && str[1]=='i') {
        string res= replacePI(str.substr(2));
        return "3.14"+res;
    }  
    else return str[0]+replacePI(str.substr(1));
}

int main() {
    string str; cin>>str;
    cout<<replacePI(str)<<endl;
}