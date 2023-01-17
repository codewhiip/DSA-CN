#include<iostream>
using namespace std;

void merge(int A[], int s, int m, int e) {
    int n1= m-s+1, n2= e-m;
    int A1[n1], A2[n2]; // temporary arrays

    for(int i=0; i<n1; i++) A1[i]=A[s+i];
    for(int i=0; i<n2; i++) A2[i]=A[m+1+i];

    int i=0, j=0, k=s;
    while(i<n1 && j<n2) {
        if(A1[i]<A2[j]) { A[k]=A1[i]; k++; i++; }
        else { A[k]=A2[j]; k++; j++; }
    }
    while(i<n1) { A[k]=A1[i]; k++; i++; }
    while(j<n2) { A[k]=A2[j]; k++; j++; }
}

void merge_sort(int A[], int s, int e) {
    if(s>=e) return;
    int m=(s+e)/2;
    merge_sort(A, s, m);
    merge_sort(A, m+1, e);

    merge(A, s, m, e);
}

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];

    merge_sort(A, 0, n-1);
    for(int i=0; i<n; i++) cout<<A[i]<<' ';
    cout<<'\n';
}

/*
Time complexity- 
Recurrence relation-    T(n) = 2T(n/2) + n          (Sorting left half- T(n/2), Sorting right half- T(n/2), Merging arrays- n)
                        T(n/2) = 2T(n/4) + n/2
                        ...
                        T(1) = 1

                also, number of levels-> n/(2^k) = 1   => k=logn 
                T(n) = n+n+n+ . . . + log n terms = nlogn

        Best-   O(nlogn)    
        Worst-  O(nlogn)    
        Average-O(nlogn)    

Space complexity- O(n)
    
*/