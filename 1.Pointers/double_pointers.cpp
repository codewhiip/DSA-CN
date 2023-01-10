#include<iostream>
using namespace std;

void increment1(int** p) {
    p++;
}
void increment2(int** p) {
    (*p)++;
}
void increment3(int** p) {
    (**p)++;
}

int main() {
    int i=10; 
    //  cout<<i<<endl;
    int* p = &i; 
    // cout<<p<<" "<<*p<<endl;
    int** p2 = &p; 
    // cout<<p2<<" "<<*p2<<" "<<&p2<<endl;
    
    // cout<<increment1(p2)<<" "<<increment2(p2)<<" "<<increment3(p2)<<endl;
}