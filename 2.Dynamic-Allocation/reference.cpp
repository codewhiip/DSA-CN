#include<iostream>
using namespace std;

void incr(int i) { i++; }
void incr2(int &i) {i++; }

// Bad practice as the scope of these variables are limited to the functions only
int& f(int n) {
    int a=n; 
    return a;
}
int* f2() {
    int i=10;
    return &i;
}

int main() {
    int i=10;
    int j=i; // Pass by value
    int &k=i; // Reference variable or Pass by reference
    
    // i++; cout<<j<<" "<<k<<endl;
    // incr(i); cout<<i<<" "; // doesnot affect te value as this was pass by value
    // incr2(i); cout<<i<<" "; // affects the value as this was pass by reference
    
    int &l=f(i); cout<<l<<' ';
    int* p= f2(); cout<<p<<' ';
}