#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    string S;
    cin >> S;
    int N = S.length();
    for(int i=0; i<N; i+=2){
        char temp;
        temp = S[i];
        S[i] = S[i+1];
        S[i+1] = temp;
    }

    cout << S << nl;
}
