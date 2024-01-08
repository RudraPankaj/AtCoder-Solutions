#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define nl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
    fast;

    int a,b;
    ll ans=1;
    cin >> a >> b;
    int playtime = abs(a-b);

    if(!playtime) cout << 1 << nl;
    else{
        while(playtime--) ans*=32;
        cout << ans << nl;
    }

    return 0;
}
