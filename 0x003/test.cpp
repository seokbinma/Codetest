#include <bits/stdc++.h>
using namespace std;

void insert(int idx, int num, int arr[], int& len){
    for(int i = len; i>idx;i--) // 삽입을 할것임으로 해당 idx전까지+1 해서 옮겨주고 해당 idx에 값을 삽입
        arr[i]=arr[i-1];
    arr[idx] = num;
    len ++;
}

void erase(int idx, int arr[], int& len){
    len --; // 후위 연산자로 바로 -1을 해주고 진행해야함 해당 4를 없애고 뒤에꺼를 땡겨야함으로 
    for(int i = idx; i <len; i++){
        arr[i]=arr[i+1];
    }
}

void printArr(int arr[], int& len){
  for(int i = 0; i < len; i++) cout << arr[i] << ' ';
  cout << "\n\n";
}

void insert_test(){
  cout << "***** insert_test *****\n";
  int arr[10] = {10, 20, 30};
  int len = 3;
  insert(3, 40, arr, len); // 10 20 30 40
  printArr(arr, len);
  insert(1, 50, arr, len); // 10 50 20 30 40
  printArr(arr, len);
  insert(0, 15, arr, len); // 15 10 50 20 30 40
  printArr(arr, len);
}

void erase_test(){
  cout << "***** erase_test *****\n";
  int arr[10] = {10, 50, 40, 30, 70, 20};
  int len = 6;
  erase(4, arr, len); // 10 50 40 30 20
  printArr(arr, len);
  erase(1, arr, len); // 10 40 30 20
  printArr(arr, len);
  erase(3, arr, len); // 10 40 30
  printArr(arr, len);
}

int main(void) {
  insert_test();
  erase_test();
  system("pause");
}