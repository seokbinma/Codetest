#include<bits/stdc++.h>
using namespace std;
int board[500][500];
int vis[500][500];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1}; // 상하좌우 네 방향을 의미

int main(){

    int row,column;
    cin >> row >> column;
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin>> board[i][j] ;
        }
    }
    int pic_num= 0;
    int pic_A = 0;
    for(int i=0; i<row; i++){
        for(int j=0; j <column; j++){
            if(board[i][j] == 0 || vis[i][j]==1 ){continue;};
            pic_num ++;
            queue<pair<int,int>> Q;
            vis[i][j]= 1;
            Q.push({i,j});
            int Area = 0;
            while(!Q.empty()){
                Area ++;
                pair<int,int> cur = Q.front(); Q.pop();
                for(int dir =0; dir <4; dir ++){
                int nx = cur.first + dx[dir] ;
                int ny = cur.second + dy[dir];
                if(nx <0 || nx >= row || ny <0 || ny >= column){continue ;}
                if(vis[nx][ny] || board[nx][ny] == 0 ){continue;}
                vis[nx][ny] =1;
                Q.push({nx,ny});
                }
            }
            pic_A =max(pic_A,Area);
        }
    }

    cout << pic_num <<"\n"<< pic_A ;

// 일단 행->열에 있는데이터가 1이면 스타트 이고 만약에 이미 Vis 했으면 스타트 x
}