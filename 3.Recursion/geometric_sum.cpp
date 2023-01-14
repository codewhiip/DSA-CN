#include<iostream>
#include<math.h>
using namespace std;

double gp(int k) {
    if(k==0) return 1;
    else return (1/pow(2, k)) + gp(k-1);
}

int main() {
    int k; cin>>k;
    cout<<gp(k)<<endl;
}