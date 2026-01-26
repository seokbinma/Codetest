// Authored by : BueVonHun
// Co-authored by : BaaaaaaaaaaarkingDog
// http://boj.kr/f3877bee8d3c454482dd3229e4246b49
#include <bits/stdc++.h>
using namespace std;

int dx[6] = {0, 0, 1, -1, 0, 0};
int dy[6] = {1, -1, 0, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
int board[103][103][103];
int dist[103][103][103];
queue<tuple<int, int, int>> Q;
int m, n, h;
int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> m >> n >> h;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < m; k++) {
        int tmp;
        cin >> tmp;
        board[j][k][i] = tmp;
        if (tmp == 1) Q.push({j, k, i});
        if (tmp == 0) dist[j][k][i] = -1;
      }
    }
  }

  while (!Q.empty()) {
    auto cur = Q.front();
    Q.pop();
    int curX, curY, curZ;
    tie(curX, curY, curZ) = cur;
    for (int dir = 0; dir < 6; dir++) {
      int nx = curX + dx[dir];
      int ny = curY + dy[dir];
      int nz = curZ + dz[dir];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h) continue;
      if (dist[nx][ny][nz] >= 0) continue;
      dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
      Q.push({nx, ny, nz});
    }
  }

  int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < m; k++) {
        if (dist[j][k][i] == -1) {
          cout << -1 << "\n";
          return 0;
        }
        ans = max(ans, dist[j][k][i]);
      }
    }
  }
  cout << ans << "\n";
  return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int BOX[100][100][100];
int Tomato[100][100][100];

int dx[6] = {1,0,-1,0,0,0};
int dy[6] = {0,1,0,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};
queue <tuple<int,int,int>> Q ;
// 익은 토마토는 1 안익은거 0 없으면 -1
int main(){
    int M,N,H;
    cin >> M >> N >> H;
    for(int i = 0 ; i< H; i++){
        for(int j = 0 ; j< M; j++){
            for(int k = 0 ; k< N; k++){
                int tmp;
                cin >> tmp;
                BOX[i][j][k] =  tmp ;
                if(tmp == 1){Q.push({i,j,k});}
                if(tmp == 0){Tomato[i][j][k]= -1;}
            }
        }
    }
    while(!Q.empty()){
        tuple<int,int,int> cur = Q.front();
        Q.pop();
        int x,y,z;
        tie(z, x, y) = cur;
        for(int dir =0; dir < 6; dir ++ ){
            int nx = x + dx[dir];
            int ny = y+ dy[dir];
            int nz = z + dz[dir];
            if(nx<0  || nx >= M  || ny <0 || ny >= N || nz <0 || nz >= H){continue;}
            if(Tomato[nz][nx][ny]>= 0) {continue;}
            Tomato[nz][nx][ny] = Tomato[z][x][y] +  1;
            Q.push({nz,nx,ny});
        }

    }
int ans = 0;
    for(int i = 0 ; i< H; i++){
        for(int j = 0 ; j< M; j++){
            for(int k = 0 ; k< N; k++){
        if (Tomato[i][j][k] == -1) {
          cout << -1 << "\n";
          return 0;
        }
        ans = max(ans, Tomato[i][j][k]);
      }
    }
  }
  cout << ans << "\n";
  return 0;

    
}
*/