#include<iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a; 
    *a = *b; 
    *b = temp;
}

/* repeatedly swap two adjacent elements if they are in wrong order*/

void bubble_sort(int A[], int n) {
    for(int i=0; i<n-1; i++) 
        for(int j=0; j<n-i-1; j++) 
            if(A[j]>A[j+1]) swap(&A[j], &A[j+1]);
}

void optimised_bubble_sort(int A[], int n) {
    for(int i=0; i<n-1; i++) {
        int swapped = 0;
        for(int j=0; j<n-i-1; j++) {
            if(A[j]>A[j+1]) {
                swap(&A[j], &A[j+1]);
                swapped=1;
            }
        }
        if(!swapped) break;
    }
}

int main() {
    int n; cin>>n;
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];

    optimised_bubble_sort(A, n);
    for(int i=0; i<n; i++) cout<<A[i]<<" ";
    cout<<endl;
}

/*
Algorithm- 
    bubbleSort(array)
        for i <- 1 to indexOfLastUnsortedElement-1
            if leftElement > rightElement
                swap leftElement and rightElement
    end bubbleSort

    optimisedBubbleSort(array)
        swapped <- false
        for i <- 1 to indexOfLastUnsortedElement-1
            if leftElement > rightElement
                swap leftElement and rightElement
                swapped <- true
    end bubbleSort

Time complexity-
No. of comparision for i^th iteration is (n-i). So,
(n-1)+(n-2)+. . . 1 = (n^2- n)/2 ~ n^2
    Best-       O(n)    array is already sorted
    Worst-      O(n^2)  array is in descending order 
    Average-    O(n^2)  elements of the array are in jumbled order (neither ascending nor descending).

Space complexity- O(1)  an extra variable is used for swapping.
        optimised O(2)  two extra variables are used
*/