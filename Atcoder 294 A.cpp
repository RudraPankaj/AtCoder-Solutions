#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    int N;
    cin >> N;
    int A[N];
    vector<int> isEven;
    for(int i=0; i<N; i++){
        cin >> A[i];
        if(A[i]%2 == 0) isEven.push_back(A[i]);
    }
    int noOfEven = isEven.size();
    for(int i=0; i<noOfEven-1; i++){
        cout << isEven[i] << " ";
    }
    cout << isEven[noOfEven-1] << nl;
}
