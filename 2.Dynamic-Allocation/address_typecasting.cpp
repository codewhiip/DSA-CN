#include<iostream>
using namespace std;

int main() {
    int i=65; char c=i;// Implicit typecasting

    int* p = &i; cout<<*p<<" "<<p<<endl; // Reads 4 bits
    // char* pc = p; cout<<*(pc)<<" "<<pc<<endl; // Also reads 4 bits
    char* pc = (char*)p; cout<<*(pc)<<" "<<pc<<endl; // Explicit typecasting
}