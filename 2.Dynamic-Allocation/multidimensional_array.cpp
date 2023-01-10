#include<iostream>
using namespace std;

int main() {
    int m, n; cout<<"Enter dimensions: "; cin>>m>>n;
    int **p= new int*[m];
    for(int i=0; i<m; i++) {
        p[i]= new int[n];  // Can be variable size as well, for example) new int[i+1]
        for(int j=0; j<n; j++) cin>>p[i][j];
    }

// Print
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) cout<<p[i][j]<<" ";
        cout<<endl;
    }

// Deallocating memory
    for(int i=0; i<m; i++) delete [] p[i];
    delete [] p;
}