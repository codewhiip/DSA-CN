#include<iostream>
using namespace std;

void pairStar(string &inp, string &out, int i=0) {
    out+=inp[i];
    if(inp.length()==i+1) return;
    if(inp[i]==inp[i+1]) out+='*';

    pairStar(inp, out, i+1);
}

int main() {
    string i, o=""; cin>>i;

    pairStar(i,o);
    cout<<o<<endl;
}