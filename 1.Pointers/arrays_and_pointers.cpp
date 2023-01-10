#include<iostream>
using namespace std;

int main() {
    int A[4] = {1, 2, 3, 4};
    cout<<A<<" "<<&A<<endl;

    cout<<A<<" "<<*A<<endl;
    cout<<A+1<<" "<<*(A+1)<<endl;
    cout<<2+A<<" "<<2[A]<<endl;
    cout<<3+A<<" "<<3[A]<<endl;

    int *p= &A[3];
    cout<<A<<", "<<&A<<", "<<sizeof(A)<<endl;
    cout<<p<<", "<<&p<<", "<<sizeof(p)<<endl;

    p++; cout<<p<<endl;
    // A++; cout<<A<<endl; // As 'A' array ke corresponding koi alag memory nhi hai
    p = A+1; cout<<p<<endl;
}