#include <bits/stdc++.h>
using namespace std;

vector <int> tree[100005];
int p[100005];

void dfs(int cur){
    for(int nxt :tree[cur]){
        if(p[cur]==nxt) continue;
        p[nxt] = cur;
        dfs(nxt);
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n-1; i++){
        int x,y;
        cin >> x >> y ;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    p[1] =1;
    dfs(1);
    for (int i = 2; i <= n; i++) {
        cout << p[i] << '\n';
    }
}
