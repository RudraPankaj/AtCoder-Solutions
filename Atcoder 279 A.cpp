#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ploop for(int p=0; p<N; p++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int bottoms=0;
    string S;
    cin >> S;
    int N = S.length();
    ploop{if(S[p]=='v')bottoms++; else bottoms+=2;}
    cout << bottoms << nl;
}
