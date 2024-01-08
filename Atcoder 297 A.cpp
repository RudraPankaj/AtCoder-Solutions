#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"

int main() {
    int N;
    int DCLK = -1;
    ll D;
    cin >> N;
    cin >> D;
    ll T[N];

    for(int i=0; i<N; i++){
        cin >> T[i];
        if(i>0 && DCLK==-1){
            if(T[i]-T[i-1] <= D)
                DCLK = T[i];
        }
    }

    cout << DCLK << nl;
}
