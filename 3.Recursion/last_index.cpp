#include<iostream>
using namespace std;

int lastIndex(int A[], int n, int x) {
    if(n==0) return -1;
    if(A[n-1]==x) return n-1;
    else return lastIndex(A, n-1, x);
}

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];
    int x; cin>>x;

    cout<<lastIndex(A, n, x);
}