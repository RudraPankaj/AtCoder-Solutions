#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    int N;
    string S;
    cin >> N;
    int cntF=0, cntA=0;
    for(int i=0; i<N; i++){
        cin>>S;
        S=="For"?cntF++:cntA++;
    }
    cntF>cntA?(cout<<"Yes"<<nl):(cout<<"No"<<nl);

    return 0;
}
