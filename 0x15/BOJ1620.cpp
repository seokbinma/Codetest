#include <bits/stdc++.h>
using namespace std;

unordered_map<string,int> a;
unordered_map<int, string> b;

int main(){
    // [중요] 입출력 가속 코드
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=1; i < n+1; i ++){
        string name;
        cin >> name;
        a[name] = i;
        b[i] = name;
    }
    for(int i=0; i< m ; i++){
        string ans;
        cin >> ans;
        if(isdigit(ans[0])){ //isdigit은 문자 하나만 검사하는 함수
        int num = stoi(ans);
        cout << b[num] << '\n';
        }
        else{
        cout << a[ans] <<'\n';
        }
    }
}