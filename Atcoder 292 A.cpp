#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    string S;
    cin >> S;
    int N = S.length();
    for(int i=0; i<N; i++){
        S[i] -= 32;
    }
    cout << S << nl;
}
