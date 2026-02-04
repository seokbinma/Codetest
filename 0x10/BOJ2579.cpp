#include <bits/stdc++.h>
using namespace std;

int S[305];
int d[305][3];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> S[i];

    if (n == 1) {
        cout << S[1] << endl;
        
        return 0;
    }

    d[1][1] = S[1];
    d[1][2] = 0;
    d[2][1] = S[2];
    d[2][2] = S[1] + S[2];

    for (int i = 3; i <= n; i++) {
        // i번째 계단이 연속 1개째인 경우 (i-1을 안 밟음)
        d[i][1] = max(d[i - 2][1], d[i - 2][2]) + S[i];
        
        // i번째 계단이 연속 2개째인 경우 (i-1을 밟았음)
        // 이 경우 i-1은 반드시 '연속 1개째'였어야 함!
        d[i][2] = d[i - 1][1] + S[i];
    }

    cout << max(d[n][1], d[n][2]) << endl;
    return 0;
}