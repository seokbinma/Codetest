#include <bits/stdc++.h>
using namespace std;
string board [100];
int dis [100][100];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        
     cin>> board[i];

    }
    dis[0][0] = 1;
    queue<pair<int,int>> Q;
    Q.push({0,0});
    while (!Q.empty()) {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            // 1. 범위 체크 (가장 먼저!)
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            
            // 2. 이미 방문했거나(dis > 0) 벽이라면(board == 0) 패스
            if (dis[nx][ny] > 0 || board[nx][ny] == '0') continue;

            // 3. 핵심: 다음 칸의 거리는 '현재 칸의 거리 + 1'
            dis[nx][ny] = dis[cur.first][cur.second] + 1;
            Q.push({nx, ny});
        }
    }
    cout << dis[n - 1][m - 1] << "\n";
}