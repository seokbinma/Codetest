#include <bits/stdc++.h>
using namespace std;

pair<int,int> a[100005];
int main(){
    int n;
    cin >> n;
    for(int i =0; i< n; i++){
        cin >> a[i].second>> a[i].first;
    }

    sort(a,a+n);
    int ans =0;
    int t =0;
    for(int i=0; i< n; i++){
        if(t>a[i].second) continue;
        ans ++;
        t = a[i].first;
    }
    cout << ans;
}