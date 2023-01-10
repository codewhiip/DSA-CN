#include<iostream>
using namespace std;

int max(int a, int b) { return (a>b)?a:b; } // improves readability, performance hit

inline int max2(int a, int b) { return (a>b)?a:b; } // function body is replaced while compilation, so no runtime performance hit as well as maintained readability 
// conversion of any function to inline is based on some compilation rules

// argument si is not compuslary to input, this argument has default value 0
// we can assign a default value to the parameter starting from right 
int sum(int arr[], int size, int si=0) { 
    int ans=0;
    for(int i=si; i<size; i++) ans+= arr[i];
    return ans;
}

int main() {
    int a, b; cin>>a>>b;

    // int c; // c has max value
    // if(a>b) c=a; else c=b; 

    int c = (a>b)?a:b; // tertiary operator
    c = max(a, b);

    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout<<sum(arr, 10)<<" "<<sum(arr, 10, 2)<<endl;
}