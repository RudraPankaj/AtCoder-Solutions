#include <iostream>
using namespace std;

#define nl "\n"

int main(){
    string S;
    int N;
    bool poorfound = false;
    bool goodfound = false;

    cin >> N >> S;

    for(int i=0; i<N; i++){
        if(S[i]=='x'){
            poorfound = true;
        }
        if(S[i]=='o'){
            goodfound = true;
        }
    }

    if(goodfound && !poorfound)
        cout << "Yes" << nl;
    else
        cout << "No" << nl;
}
