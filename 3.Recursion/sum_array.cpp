#include<iostream>
using namespace std;

int sumArray(int A[], int n) {
    if(n==0) return 0;
    return A[n-1]+sumArray(A, n-1);
}

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];

    cout<<sumArray(A, n);
}