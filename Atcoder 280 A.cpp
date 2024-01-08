#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ploop for(int p=0; p<N; p++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fast;
    char c;
    int H, W, sq=0;
    cin >> H >> W;
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            cin >> c;
            if(c=='#')sq++;
        }
    }
    cout << sq << nl;
}
