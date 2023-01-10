#include<iostream>
using namespace std;

void print(int *p) {
    cout<<*p<<" ";
}

void increment_pointer(int *p) {
    p=p+1;
}

void increment(int *p) {
    (*p)++;
}

int main() {
    int i=10;
    int *q = &i;

// Call by value, dereferences the pointer and prints the value 
    print(q); 

// Call by value doesnot alter the value of the original pointer address
    increment_pointer(q); 
    cout<<q<<endl;

// Call by value but first dereferences the value and then alters it, so prints the altered value 
    cout<<*q<<" "; 
    increment(q); 
    cout<<*q<<endl;
}