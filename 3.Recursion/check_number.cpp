#include<iostream>
using namespace std;

bool checkX(int A[], int n, int x) {
    if(n==0) return false;
    if(A[n-1]==x) return true;
    else checkX(A, n-1, x);
}

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];
    int x; cin>>x;

    cout<<checkX(A, n, x)<<endl;
}