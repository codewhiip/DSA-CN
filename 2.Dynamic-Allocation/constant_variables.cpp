#include<iostream>
using namespace std;

void f(const int *p) {
    // (*p)++; not allowed to write a constant variable
}

void g(int const &a) {
    // a++; const qualifies variable cannot be written
}

int main() {
    // constant integer
    const int i=10; // A constant variable should be declared and assigned together
    int const i2=12;
    
    // constant reference from a non const integer
    int j=12;
    int *p3 = &j;
    f(p3); g(j);
    const int &k = j; // Path is contact, storage is not constant
    j++; //k++; is not allowed as the path through k to the address of j is contact, but through j is not
    // we can read through k but cannot write through it. But we can write and read both through j

    // constant reference from a constant integer
    int const j2 = 12; // variable is constant
    int const &k2 = j2; // path is also constant
    // j2++; k2++; not allowed

    // reference from a const int
    int const j3 = 123; // variable is contant
    // int &k3 = j3; // path is not constant. not possible. read and write of a variable which you cannot write is not possible

    int const i=10;
    // int* p=&i; *p=15; you cannot store a constant variable to a non constant pointer due to write access issues
    int const *p=&i; 

    int r=12;
    int const *p2=&r; // allowed as the path through p2 is writeable through r, r++ is allowed but (*p2)++ is not

    int r2=10; 
    int r3=21;
    int const *p4 = &r2;
    p4=&r3; // allowed as the path pointing to the variable is changed

    int const *p5=&r2;
    // (*p5)++; not allowep5 is not writable
    p5=&j;

    int const * const p6 = &r2;
    // p6 = &r3; not allowed
    // (*p6)++; not allowed
}
