#include<bits/stdc++.h>
using namespace std;

int subsetSum(int A[], int n, int i, int sum, int count) {
    if(i==n) {
        if(sum==0) { count++; }
        return count;
    }
    count=subsetSum(A, n, i+1, sum-A[i], count);
    count=subsetSum(A, n, i+1, sum, count);
    return count;
}

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[n];
    int k; cin>>k;

    cout<<subsetSum(A, n, 0, k, 0);
}