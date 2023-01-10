#include<iostream>
using namespace std;

int main() {
// Assiging value to the pointer variable 

    // int i=10;
    // int *p = &i;
    // cout<<p<<endl;
    // cout<<*p<<endl; 

    // float f=10;
    // float *pf = &f;
    // cout<<pf<<endl;

    // double d=10;
    // double *pd = &d;
    // cout<<pd<<endl;

// ------------------------------------------------------------------------------------
    // int i=10;
    // int *p= &i;

// Size of the pointer variable is the same as the type of variable you are storing in it 
    // cout<<sizeof(p)<<endl;

// Values and addresses of i and p can be accessed through *, & operators.
    // cout<<i<<endl;
    // out<<*i<<endl; // i must be a pointer but has a type int 
    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;

// Pointing to the same address, so no ambiguity in the changes in values
    // cout<<i<<" "<<*p<<endl;
    // i++;
    // cout<<i<<" "<<*p<<endl;

// Assigning same value to different variable and accessing it
    // int a = i; a++;
    // cout<<a<<" "<<*p<<endl;
    // *p = 23;
    // cout<<i<<" "<<*p<<endl;
    // (*p)++;
    // cout<<i<<" "<<*p<<endl;

// Creating a pointer variable q that stores the address of p
    // int *q = p;

// ------------------------------------------------------------------------------------------------------------------------------

// Bad practices, always assign the value to the pointer variable otherwise garbage values will keep assiging
    int i; cout<<i<<endl;
    i++;   cout<<i<<endl;

    int *p; cout<<p<<" "<<*p<<endl;
    (*p)++; cout<<p<<" "<<*p<<endl;

    return 0;
}