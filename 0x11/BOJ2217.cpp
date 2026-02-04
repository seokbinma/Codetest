#include<bits/stdc++.h>
using namespace std;

int a[100005];

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n); 
    int ans = 0;
    for(int i =0; i< n; i++){
        int current_w= a[i] *(n-i);
        if(ans < current_w){
            ans = current_w;
        }
    }
    cout << ans <<endl;
}