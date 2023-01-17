#include<bits/stdc++.h>
using namespace std;

void combinations(vector<char> keypad[], int input[], string res, int i, int n) {
    if(i==n) {
        cout<<res<<' ';
        return;
    }
    int digit=input[i];
    int len=keypad[digit].size();
    for(int j=0; j<len; j++) {
        combinations(keypad, input, res+keypad[digit][j], i+1, n);
    }
}

int main() {
    vector<char> keypad[] = { {}, {}, 
                              {'a','b','c'},
                              {'d','e','f'},
                              {'g','h','i'},
                              {'j','k','l'},
                              {'m','n','o'},
                              {'p','q','r','s'},
                              {'t','u','v'},
                              {'t','u','v'},
                              {'w','x','y','z'}
                            };

    int input[]={2, 3, 5};
    int n=sizeof(input)/sizeof(input[0]);
    combinations(keypad, input, string(""), 0, n); cout<<'\n';
}