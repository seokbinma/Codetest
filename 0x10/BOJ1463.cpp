#include<bits/stdc++.h>
using namespace std;

int d[1000005];
int n;
int main(){
    // 1. 입력을 받는 코드가 꼭 필요합니다!
    if (!(cin >> n)) return 0;

    // 2. DP 테이블 초기화 (1을 1로 만드는 연산 횟수는 0)
    d[1] = 0;
for (int i = 2; i <= n; i++) {
        // 1. 기본적으로 1을 빼는 경우를 먼저 고려
        d[i] = d[i - 1] + 1;

        // 2. 2로 나누어 떨어지면, 2로 나누는 게 더 빠른지 확인
        if (i % 2 == 0) d[i] = min(d[i], d[i / 2] + 1);

        // 3. 3으로 나누어 떨어지면, 3으로 나누는 게 더 빠른지 확인
        if (i % 3 == 0) d[i] = min(d[i], d[i / 3] + 1);
    }
cout << d[n] << endl;
}
