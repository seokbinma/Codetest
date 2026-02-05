#include<bits/stdc++.h>
using namespace std;

int main(){
    string t, p;
    getline(cin, t);
    getline(cin, p);
    int n=0;
    int ans=0;
    while (true) {
        // 1. n번 인덱스부터 p를 찾습니다.
        int w = t.find(p, n);
        // 2. 만약 더 이상 찾을 수 없다면 루프 종료!
        if (w == string::npos) {
            break;
        }
        ans++;
        // 4. 다음 탐색은 '찾은 위치 바로 다음'부터 시작해야 합니다.
        // 만약 중복 탐색을 피하고 싶다면: n = w + p.size();
        // 만약 겹치는 것까지 찾고 싶다면: n = w + 1;
        n = w + p.size() ;
    }
    cout << ans ;
}