#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    bool foundEng = false;
    int N;
    cin >> N;
    string str[N];
    for(int i=0; i<N; i++){
        cin >> str[i];
        if(str[i] == "and" || str[i] == "not" || str[i] == "that" || str[i] == "the" || str[i] == "you")
            foundEng = true;
    }

    if(foundEng)
        cout << "Yes" << nl;
    else
        cout << "No" << nl;
}
