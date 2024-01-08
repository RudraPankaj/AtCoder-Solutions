#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    string S;
    cin >> S;
    int N = S.length();
    for(int i=0; i<N; i++){
        if(S[i] >= 65 && S[i] <= 90){
            cout << i+1 << nl;
            break;
        }
    }
}
