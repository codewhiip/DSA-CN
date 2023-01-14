#include<iostream>
using namespace std;

void towerofhanoi(int n, char from, char to, char aux) {
    if(n==0) return;
    towerofhanoi(n-1, from, aux, to);
    cout<<n<<" from "<<from<<" to "<<to<<endl;
    towerofhanoi(n-1, aux, to, from);
}
int main() {
    int n; cin>>n; 
    towerofhanoi(n, 'A', 'C', 'B');
}