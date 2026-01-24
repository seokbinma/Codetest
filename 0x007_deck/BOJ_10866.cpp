#include<bits/stdc++.h>
using namespace std;

int main(){
    int x; 
    cin >> x;
    deque<int> d;
    while(x--){
        string cmd;
        cin >> cmd;
        if (cmd== "push_back"){
            int y;
            cin >> y;
            d.push_back(y);
        }
        else if (cmd== "push_front"){
            int z;
            cin >> z;
            d.push_front(z);
        }
        else if(cmd =="front"){
            if(d.empty()){cout << -1 <<endl;}
            else{
            cout <<d.front()<<endl;
                }   
        }
        else if (cmd == "pop_front"){
            if(d.empty()){cout << -1 <<endl;}
            else{
            cout <<d.front()<<endl;
            d.pop_front();
                }   
        }
        else if(cmd =="back"){
            if(d.empty()){cout << -1 <<endl;}
            else{
                cout <<d.back()<<endl;
                }   
        }
        
        else if(cmd =="pop_back"){
            if(d.empty()){cout << -1 <<endl;}
            else{
            cout <<d.back()<<endl;
            d.pop_back();
                }   
        }
        else if(cmd == "size"){
            cout<<d.size()<<endl;
        
        }
        else if(cmd == "empty"){
            if(d.empty()){
                cout <<1 <<endl;
            }
            else{
                cout << 0 << endl;
            }
        }        
    }

}