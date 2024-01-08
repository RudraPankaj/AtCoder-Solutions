#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    int N, P, Q, R, S;
    cin >> N >> P >> Q >> R >> S;
    int A[N+1];
    for(int p=1; p<=N; p++){
        cin>>A[p];
    }
    for(int p=P, r=R; p<=Q; p++,r++){
        int temp;
        temp = A[p];
        A[p] = A[r];
        A[r] = temp;
    }
    for(int p=1; p<N; p++){
        cout << A[p] << " ";
    }
    cout << A[N] << nl;
    return 0;
}
