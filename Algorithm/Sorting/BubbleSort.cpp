#include <iostream>
#inlcude <utility>
/*
https://en.cppreference.com/w/cpp/algorithm/swap
std::swap header file
Defined in header <algorithm> (until C++11)
Defined in header <utility> (since C++11)
Defined in header <string_view> (since C++17)*/

using namespace std;

void BubbleSort(int* arr, int size){
  bool seqIndicator = true;
  
  if (size < = 1)
     return;
  
  for(int i = 0; i < size - 1; i++){
    seqIndicator = true;
    for(int j = 0; j < size - i - 1; j++){
      if(arr[j] > arr[j + 1]){
        swap(arr[j], arr[j + 1]);
        seqIndicator = false;
    }
    if(true == seqIndicator){
      break;
    }
}

int main(){
  int arrLen = 10;
  int arr[arrLen] = {1, 4, 1, 3, 2, 8, 6, 5, 6, 8};
  
  BubbleSort(arr, arrLen);
  return 0;
}
