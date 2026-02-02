#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    vector<int> A(a, 0); 
    vector<int> B(b, 0);
    vector<int> C(a+b,0);
    for(int i =0; i<a ; i ++){
        cin >> A[i] ;
    }
    for(int j=0; j <b; j++){
        cin >> B[j];
    }
    int aidx =0, bidx =0;
    for(int k =0; k<a+b; k++){
        if(bidx == b) C[k] = A[aidx++];
        else if (aidx == a) C[k] = B[bidx++];
        else if (A[aidx] <= B[bidx]) C[k] = A[aidx++];
        else C[k] = B[bidx++];
    }
    for(int i=0; i<a+b; i++){
        cout << C[i] <<' ';
    }
}
