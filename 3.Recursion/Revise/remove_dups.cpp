#include<iostream>
using namespace std;

void removedups(char input[1000]) {
    if(input[0]=='\0') return;
    if(input[0]==input[1]) {
        int i=1;
        for(; input[i]!='\0'; i++) 
            input[i-1]=input[i];
        input[i-1]=input[i];
        removedups(input);
    }
    removedups(input+1);
}

int main() {
    char input[1000]; cin>>input;
    removedups(input);
    cout<<input<<endl;
}