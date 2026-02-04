#include <bits/stdc++.h>
using namespace std;

//d[1] = 1 , d[2] = 2 , d[3]=3 ,d[4]=5
int d[10005];
int mod= 10007;
int main(){
    int n;
    cin >> n;
    d[1] =1;
    d[2] = 2;
    for(int i= 3; i<= n; i++){
        d[i] =(d[i-1]+d[i-2]) % mod;
    }
    cout << d[n];
}