#include<bits/stdc++.h>
using namespace std;

void permute(string input, string output) {
    if(input.length()==0) {
        cout<<output<<" ";
        return;
    }
    for(int i=0; i<input.length(); i++) {
        char ch = input[i];
        string left_substr = input.substr(0, i);
        string right_subst= input.substr(i+1);
        string rest = left_substr + right_subst;
        permute(rest, output+ch);
    }
}

int main() {
    string input; cin>>input;
    string output="";

    permute(input, output);
}