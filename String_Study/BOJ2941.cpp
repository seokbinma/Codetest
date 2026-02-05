#include <bits/stdc++.h>
using namespace std;

string c[8] ={"c=","c-","dz=","d-","lj","nj","s=","z="};

int main(){
    string a ;
    cin >> a;
    int cnt=0;
    for (auto x : c) {
        while (true) {
            auto val = a.find(x);
            if (val == string::npos) break; // 더 이상 못 찾으면 탈출

            // 핵심: erase 대신 1글자짜리 기호로 바꿔치기!
            // val 위치부터 x.size()만큼의 길이를 "#"으로 바꿉니다.
            a.replace(val, x.size(), "#");
        }
    }

    // 모든 특수 문자가 1글자(#)로 변했으므로, 
    // 그냥 문자열의 전체 길이가 정답이 됩니다.
    cout << a.size();
}
