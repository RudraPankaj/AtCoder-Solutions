#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define ploop for(int p=0; p<N; p++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    int N;
    cin >> N;
    string str[N];
    for(int i=0; i<N; i++){
        cin >> str[i];
    }
    for(int i=N-1; i>=0; i--){
        cout << str[i] << nl;
    }
}
