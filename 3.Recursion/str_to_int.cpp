#include<iostream>
#include<math.h>
using namespace std;

int stringInt(string str) {
    if(str.length()==1) return (str[0]-'0');
    double i = stringInt(str.substr(1));
    double x = str[0]-'0';
    x = x*pow(10, str.length()-1)+i;
    return int(x);
}

int main() {
    string str; cin>>str;
    cout<<stringInt(str)<<endl;
}