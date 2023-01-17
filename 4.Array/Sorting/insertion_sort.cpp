#include<iostream>
using namespace std;

/* Insert an element from unsorted array to its correct 
position in the sorted array */

void insertion_sort(int A[], int n) {
    for(int i=1; i<n; i++) {
        int curr = A[i];
        int j=i-1;
        while(A[j]>curr && j>=0) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1]=curr;
    }
}

int main() {
    int n; cin>>n; 
    int A[n]; for(int i=0; i<n; i++) cin>>A[i];

    insertion_sort(A, n);
    for(int i=0; i<n; i++) cout<<A[i]<<" ";
    cout<<endl;
}

/* 
Time complexity- 
    Best-   O(n)    When the array is already sorted, the outer loop runs for n number 
                    of times whereas the inner loop does not run at all. So, there are only 
                    n number of comparisons. 
    Worst-  O(n^2)  Suppose, an array is in ascending order, and you want to sort it in descending order. 
                    In this case, worst case complexity occurs. Each element has to be compared with each 
                    of the other elements so, for every nth element, (n-1) number of comparisons are made.
                    Thus, the total number of comparisons = n*(n-1) ~ n2
    Average-O(n^2)  elements of an array are in jumbled order (neither ascending nor descending).

Space complexity- O(1) because an extra variable 'curr' is used
Stability- Yes
*/