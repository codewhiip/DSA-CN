#include<iostream>
using namespace std;

int SumDigits(int n) {
    if(n==0) return 0;
    else return (n%10)+SumDigits(n/10);
}

int main() {
    int n; cin>>n;
    cout<<SumDigits(n);
}