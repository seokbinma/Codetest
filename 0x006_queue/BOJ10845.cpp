#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    queue<int> q;

    while(x--){
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            int y;
            cin >> y;
            q.push(y);
        }
        else if (cmd == "front") {
            // 비어있을 때 -1 출력 (중요!)
            if (q.empty()) cout << -1 << endl;
            else cout << q.front() << endl;
        }
        else if (cmd == "back") {
            // 비어있을 때 -1 출력 (중요!)
            if (q.empty()) cout << -1 << endl;
            else cout << q.back() << endl;
        }
        else if (cmd =="pop"){
            if(q.empty() == true){
                cout << -1 << endl;
            }
            else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
        else if (cmd == "size"){
            cout<<q.size()<<endl;
        }
        else if (cmd=="empty"){
            if (q.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
}