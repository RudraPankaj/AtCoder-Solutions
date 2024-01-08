#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    int N;
    string S;
    bool alt = true;
    cin >> N >> S;
    for(int i=1; i<N; i++){
        if(S[i]==S[i-1]){
            alt = false;
            break;
        }
    }
    if(alt) cout << "Yes" << nl;
    else cout << "No" << nl;
}
