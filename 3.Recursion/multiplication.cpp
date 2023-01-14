#include<iostream>
using namespace std;

int multi(int m, int n) {
    if(m<n) return multi(n, m);
    else if(n!=0) return m+multi(m, n-1);
    else return 0;
}

int main() {
    int m, n; cin>>m>>n;
    int ans=1;
    ans= multi(m, n);
    cout<<ans<<endl;
}