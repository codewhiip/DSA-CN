#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* selects the smallest element from an unsorted list in 
each iteration and places that element at the beginning of the 
unsorted list.*/

void selection_sort(int A[], int n) {
    for(int i=0; i<n-1; i++) 
        for(int j=i+1; j<n; j++) 
            if(A[j]<A[i]) swap(&A[i], &A[j]);
}

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];

    selection_sort(A, n);
    for(int i=0; i<n; i++) cout<<A[i]<<" ";
    cout<<'\n';

    return 0;
}

/*
Algorithm- 
    selectionSort(array, size)
        repeat (size - 1) times
        for each of the unsorted elements
            if element < currentMinimum
                set element as new minimum
        swap minimum with first unsorted position
    end selectionSort



Time Complexity- 
No. of comparision for i^th iteration is (n-i). So,
(n-1)+(n-2)+. . . 1 = (n^2- n)/2 ~ n^2
    Best-       O(n^2)  array is already sorted
    Worst-      O(n^2)  array is in descending order 
    Average-    O(n^2)  array are in jumbled order (neither ascending nor descending)

At every step, you have to find the minimum element and put it in the right place. 
The minimum element is not known until the end of the array is not reached.

Space Complexity- O(1)   an extra variable temp is used.
Stability- No
*/