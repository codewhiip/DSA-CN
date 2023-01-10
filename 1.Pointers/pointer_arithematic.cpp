#include<iostream>
using namespace std;

int main() {
// Integer pointer 
    int i=10; 
    int *p= &i; cout<<p<<endl;
    p = p+2; cout<<p<<endl;

// Double pointer 
    double d = 123.45;
    double *pd = &d; cout<<pd<<endl;
    pd = pd+2; cout<<pd<<endl;

// Character pointer (unusual behavoiur)
    char c= 'a';
    char *pc= &c; cout<<pc<<endl;
    pc = pc+2; cout<<pc<<endl;

}