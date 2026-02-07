#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;
//1 1 의 경우의수 -1-1,-1+1,1+1,1-1 2^2  회 반복 가능한 경우의 수 즉 경우의수 다 실행해보고 count 해서 맞추기
// 1 1 1 -1-1-1,-1-1+1,-1+1-1,-1+1+1,1-1-1,1-1+1,1+1-1,1+1+1
// 반복횟수는 numbers.size() 
int DFS(const vector<int> &numbers,int target,int idx,int sum){
    if(idx == numbers.size()){
        if(sum == target){
            return 1;
        }
        else return 0;
    }
    int result =0;
    result += DFS(numbers,target,idx+1,sum + numbers[idx]);
    result += DFS(numbers,target,idx+1,sum - numbers[idx]);
    return result;
}
int solution(vector<int> numbers, int target) {
    
    return DFS(numbers,target,0,0);
}