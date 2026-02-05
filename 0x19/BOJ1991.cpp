#include <bits/stdc++.h>
using namespace std;
int lc[100];
int rc[100];

void preorder(int cur){
    cout << char(cur+'A'-1);
    if(lc[cur] != 0){preorder(lc[cur]);}
    if(rc[cur] != 0){preorder(rc[cur]);}
}

void inorder (int cur){
    if(lc[cur] != 0){inorder(lc[cur]);}
    cout << char(cur+'A'-1);
    if(rc[cur] != 0){inorder(rc[cur]);}
}
void postorder (int cur){
    if(lc[cur] != 0){postorder(lc[cur]);}
    if(rc[cur] != 0){postorder(rc[cur]);}
    cout << char(cur+'A'-1);
}


int main(){
    char x,y,z;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
    cin >> x >> y >> z;
    if(y != '.'){lc[x-('A'-1)]= y-('A'-1);}
    if(z != '.'){rc[x-('A'-1)]= z-('A'-1);}    
    }
    preorder(1); cout<<'\n';
    inorder(1);cout<<'\n';
    postorder(1);cout<<'\n';

}