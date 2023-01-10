#include<iostream>
using namespace std;

int sum(int *A, int size) {
    // cout<<sizeof(A)<<endl; // returns value '4' ie points effectively to the first element of the array
    int res=0;
    for(int i=0; i<size; i++) {
        res+=A[i];
    }
    return res;
}

int main() { 
    int A[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // cout<<sizeof(A)<<endl;   // returns value '40' ie points to an array
    cout<<sum(A+3, 5)<<endl;  // Sums from A[3] to A[8] excluding, ie 4+5+6+7+8 = 30
}