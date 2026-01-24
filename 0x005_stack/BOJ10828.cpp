#include <bits/stdc++.h>

using namespace std;
int main() {
    stack<int> s;
    int n;
    cin >> n ;
    while(n--){
        string cmd;
        cin >> cmd;

        if(cmd == "push"){
            int val;
            cin >> val;
            s.push(val);
        }
        else if (cmd == "top") {
                // 스택이 비어있는지 먼저 확인!
            if (s.empty()) {
                cout << -1 << endl;
            } else {
                cout << s.top() << endl;
            }
        }
        else if (cmd == "size"){
            cout<<s.size()<<endl;
        }
        else if (cmd == "pop") {
            // 스택이 비어있는지 먼저 확인!
            if (s.empty()) {
                cout << -1 << endl;
            } else {
                cout << s.top() << endl;
                s.pop();
            }
        }
        else if (cmd == "empty"){
            if(s.size()>0){
                cout << 0 << endl;
            }
            else {
                cout <<1 <<endl;
            }
        }
    }
    
}