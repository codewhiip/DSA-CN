#include<iostream>
using namespace std;

int countDigits(long long n) {
    if(n==0) return 0;
    return 1+countDigits(n/10);
}

int main() {
    long long n; cin>>n;
    cout<<countDigits(n)<<endl;
}