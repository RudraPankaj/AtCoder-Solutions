#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define nl "\n"
#define ploop for(int p=0; p<N; p++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void add_edge(list<int> adj_list[], int u, int v){
    adj_list[u].push_back(v);
    adj_list[v].push_back(u);
}

void validate_connection(list<int> adj_list[], int v, int a, int b){
    list<int> :: iterator it;
    for(it = adj_list[a].begin(); it != adj_list[a].end(); ++it){
        if(*it == b){
            cout << "Yes" << nl;
            return;
        }
    }
    cout << "No";
}

int main() {
    fast;
    int a, b;
    int v = 16;
    list<int> adj_list[v];
    add_edge(adj_list, 1, 2);
    add_edge(adj_list, 1, 3);
    add_edge(adj_list, 2, 4);
    add_edge(adj_list, 2, 5);
    add_edge(adj_list, 3, 6);
    add_edge(adj_list, 3, 7);
    add_edge(adj_list, 4, 8);
    add_edge(adj_list, 4, 9);
    add_edge(adj_list, 5, 10);
    add_edge(adj_list, 5, 11);
    add_edge(adj_list, 6, 12);
    add_edge(adj_list, 6, 13);
    add_edge(adj_list, 7, 14);
    add_edge(adj_list, 7, 15);
    cin >> a >> b;
    validate_connection(adj_list, v, a, b);
}
