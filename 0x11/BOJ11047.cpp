#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[15];
int main(){
    cin >> n >> k;
    int count=0;
    for(int i=0; i<n; i++){
       cin >>  a[i];
    }
    for(int i=n-1; i>=0; i--){
        count += k/a[i] ;
        k = k%a[i];
    }
    cout<< count;
}