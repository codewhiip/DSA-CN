#include<iostream>
using namespace std;

int stairs(int n) {
    if(n==0) return 1;
    else if(n<0) return 0;
    else return stairs(n-3)+stairs(n-2)+stairs(n-1);
}

int main() {
    int n; cin>>n;
    cout<<stairs(n)<<endl;
}