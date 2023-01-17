#include<bits/stdc++.h>
using namespace std;

int subsequence(string input, string output[]) {
    if(input.empty()) {
        output[0]="";
        return 1;
    }
    int smallopsize= subsequence(input.substr(1), output);
    for(int i=0; i<smallopsize; i++) output[i+smallopsize]= input[0]+output[i];
    return 2*smallopsize;
}

int main() {
    string input; cin>>input;
    string* output=new string[1000];

    int count=subsequence(input, output);
    for(int i=0; i<count; i++) cout<<output[i]<<' ';
    cout<<'\n';
}