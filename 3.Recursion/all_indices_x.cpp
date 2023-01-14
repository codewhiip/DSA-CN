#include<iostream>
using namespace std;

void allX(int A[], int n, int x) {
    int ans;
    if(n==0) {
        cout<<"end"<<endl; return;
    }
    if(A[n-1]==x) cout<<n-1<<" ";
    allX(A, n-1, x);
} 

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];
    int x; cin>>x;

    allX(A, n, x);
}