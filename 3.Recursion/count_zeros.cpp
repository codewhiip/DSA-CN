#include<iostream>
using namespace std;

int countZeros(int n) {
    if(n==0) return 0;
    if(n%10==0) return 1+countZeros(n/10);
    return countZeros(n/10);
}

int main() {
    int n; cin>>n;
    // string s = to_string(n);

    int val=0;
    // int len = s.length();
    cout<<countZeros(n)<<endl;

}