#include<iostream>
using namespace std;

int main() {
    char str[] = "abcde";
    char *pstr = "abcde";

    int A[] = {1, 2, 3};
    char b[] = "abc";

    cout<<A<<" "<<b<<endl;

    char *c= &b[1]; cout<<c<<endl;

// Pointer prints the value until it finds the null character
    char c1 = 'a';
    char *pc = &c1; cout<<c1<<' '<<pc<<endl;
}