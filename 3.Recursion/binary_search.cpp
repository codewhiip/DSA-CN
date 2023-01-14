#include<iostream>
using namespace std;

int bin(int A[], int n, int x, int s, int e) {
    if(s>e) return -1;
    int m = (s+e)/2;
    if(A[m]==x) return m;
    if(A[m]>x) return bin(A, n, x, s, m-1);
    if(A[m]<x) return bin(A, n, x, m+1, e);
}

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];
    int x; cin>>x;

    cout<<bin(A, n, x, 0, n-1)<<endl;
}