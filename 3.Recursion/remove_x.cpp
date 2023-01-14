#include<iostream>
using namespace std;

string removeX(string str) {
    if(str.length()<=0) return str;
    else if(str[0]=='x') return removeX(str.substr(1));
    else return str[0]+removeX(str.substr(1));

}

int main() {
    string str; cin>>str;
    cout<<removeX(str)<<endl;
}