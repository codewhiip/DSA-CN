#include<iostream>
using namespace std;

int firstIndex(int A[], int n, int x) {
    int ans;
    if(n==0) return -1;
    if(A[0]==x) return 0;
    else ans = firstIndex(A+1, n-1, x);

    if(ans==-1) return -1;
    else return ans+1;
}

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];
    int x; cin>>x;

    cout<<firstIndex(A, n, x)<<endl;
}