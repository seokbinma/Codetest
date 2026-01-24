#include<bits/stdc++.h>

using namespace std;

int main(){
    while(true){
        string a;
        getline(cin,a);
        if(a == ".") break;
        stack<char> s;
        bool validcheck = true;
        for(int i=0; i<a.size();i++){
            char n;
            if(a[i]=='[' || a[i] =='('){
                s.push(a[i]);
            }
            else if(a[i]==']'){
                if(s.empty() || s.top() != '['){
                    validcheck = false;
                }
                else{
                    s.pop();
                }
            }
            else if(a[i]==')'){
                if(s.empty() || s.top() != '('){
                    validcheck = false;
                }
                else{
                    s.pop();
                }
            }
        }
        if(s.empty() == 0){
            validcheck = false;
        }
        if(validcheck == 1){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        
    }
}