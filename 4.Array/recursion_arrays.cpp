#include<iostream>
using namespace std;

bool sorted(int A[], int n) {
    if(n==0 || n==1) return true;
    if(A[0]>A[1]) return false; 
    return sorted(A+1, n-1);
}

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];

    cout<<sorted(A, n)<<endl;
}