#include <bits/stdc++.h>
using namespace std;

int a,b,c,d;
int main(){
    cin >> a >> b >> c;
    d= a*b*c;
    string e;
    e = to_string(d);
    int zerotonine[10] = {0};
    int k =0;
    for(char a= '0'; a<= '9'; a++){
        for(int i =0; i<e.size();i++){
            if(e[i]==a){
                zerotonine[k] +=1;
            }
        }
        k++;
        
    }
    //cout<< e<<endl;
    for(int j=0; j<10; j++){
        cout<< zerotonine[j]<<endl;
    }
    //system("pause");

}
//정답 풀이 
/*
#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int A, B, C;
  cin >> A >> B >> C;
  int t=A*B*C;
  int d[10] = {};
  // 계산 결과를 자릿수별로 확인하여 저장
  while (t>0) {
    d[t%10]++;
    t/=10;
  }
  for (int i=0; i<10; ++i) cout << d[i] << '\n';
}
  */