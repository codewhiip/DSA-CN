#include<iostream> 
using namespace std;

// MACROS
#define PI 3.14
#define min(a,b) (((a)<(b))(a):(b))

// Global variables
int a; // scope of this variable is global, but use it less because this variable can be accessed and altered anywhere

void g() { a++; cout<<a<<" "; }

void f() { cout<<a<<" "; a++; g(); }

int main() {
    // int r; cout<<"Enter r: "; cin>>r;
    // cout<<PI*r*r;

    a=10; f(); cout<<a<<" ";
}