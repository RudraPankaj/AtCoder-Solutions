#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    string S;
    cin >> S;
    int n=S.length();
    for(int i=0; i<n; i++)(S[i]=='0'?S[i]='1':S[i]='0');
    cout << S << nl;
}
