#include<iostream>
using namespace std;

bool checkAB(string str) {
    int count=0;
    int n=str.length();

    int i=0; 
    while(i<n) {
        while(i<n && str[i]=='a') {
            count++;
            i++;
        }
        while(i<n && str[i]=='b' && str[i+1]=='b') {
            count--;
            i+=2;
        }
        if(count!=0) return 0;
    }
    return 1;
}

int main() {
    string str; cin>>str;
    cout<<checkAB(str)<<endl;
}