#include<bits/stdc++.h>
using namespace std;
int bsearch(int A[], int key, int left, int right){
  int m = left+(right-left)/2;
  if (left > right) return -1;  
  else if (key > A[m]) bsearch(A, key, m+1, right);
  else if (key < A[m]) bsearch(A, key, left, m-1);
  else return m; 
}
int binary_search(int A[], int key, int len) {
  //TODO: Write - Your - Code
  int result = bsearch(A,key,0,len-1);
  return result;
}
int main(){
  int A[] = {1,3,6,13,26,66,148,2019,3067,10000};
  int key = 6;
  int len = 10;
  int result = binary_search(A, key, len);
  cout<<result<<endl;
}


