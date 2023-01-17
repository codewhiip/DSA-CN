#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp= *a; 
    *a = *b; 
    *b = temp;
}

/* 
An array is divided into subarrays by selecting a pivot element 
(element selected from the array). While dividing the array, the pivot 
element should be positioned in such a way that elements less than pivot are 
kept on the left side and elements greater than pivot are on the right side of 
the pivot.
*/
int partition(int A[], int s, int e) {
    int pivot= A[e];
    int i= (s-1);
    for(int j=s; j<=e-1; j++) {
        if(A[j]<=pivot) {
            i++; swap(&A[i], &A[j]);
        }
    }
    swap(&A[i+1], &A[e]);
    return (i+1);
}

void quick_sort(int A[], int s, int e) {
    if(s<e) {
        int p_index= partition(A, s, e);
        quick_sort(A, s, p_index-1);
        quick_sort(A, p_index+1, e);
    }
}

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];

    for(int i=0; i<n; i++) cout<<A[i]<<' ';
    cout<<'\n';
    quick_sort(A, 0, n-1);
    for(int i=0; i<n; i++) cout<<A[i]<<' ';
    cout<<'\n';
}

/* 
Time Complexity-
    Best-   O(nlogn)    
        It occurs when the pivot element is always the middle element or near to the middle element.
    Worst-  O(n^2)  
        It occurs when the pivot element picked is either the greatest or the smallest 
        element. This condition leads to the case in which the pivot element lies in an 
        extreme end of the sorted array. One sub-array is always empty and another sub-array 
        contains n - 1 elements. Thus, quicksort is called only on this sub-array. However, the 
        quicksort algorithm has better performance for scattered pivots.
    Average-O(nlogn)    
        It occurs when the above conditions do not occur.

Space Complexity- O(logn) 
Stability- No
*/