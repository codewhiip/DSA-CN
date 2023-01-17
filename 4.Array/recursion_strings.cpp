#include<iostream>
using namespace std;

void removeX(char str[]) {
    if(str[0]=='\0') return;
    if(str[0]!='x') removeX(str+1);
    else {
        int i=1;
        for(; str[i]!='\0'; i++) { str[i-1]=str[i]; }
        str[i-1]=str[i];
        removeX(str);
    }
}

int lengthArray(char str[]) {
    if(str[0]=='\0') return 0;
    return 1+lengthArray(str+1);
}

int main() {
    char str[1000]; cin>>str;
    cout<<lengthArray(str)<<endl;
    removeX(str); cout<<str<<endl;
}