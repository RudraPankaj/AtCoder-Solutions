#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    int N, M;
    cin>>N>>M;
    int sum=0;
    int arr[N+1];
    int arrS;
    for(int i=1; i<=N; i++)cin>>arr[i];
    for(int i=0; i<M; i++){
        cin>>arrS;
        sum+=arr[arrS];
    }
    cout<<sum<<nl;
}
