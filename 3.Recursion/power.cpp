#include<iostream>
using namespace std;

long long pow(int x, int k) {
    if(k==0) return 1;
    return x*pow(x,k-1);
}

int main() {
    int x, k; cin>>x>>k;
    cout<<pow(x, k)<<endl;
}