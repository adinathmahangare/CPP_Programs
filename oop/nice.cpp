#include <bits/stdc++.h>
using namespace std;
int getMaxSubArray(int *arr, int n){
   int maxDiff = 0;
   int zeroCnt = 0;
   for (int i = 0; i < n; i++) {
      if (arr[i] == 0) {
         ++zeroCnt;
      }
      int cnt0 = 0;
      int cnt1 = 0;
      for (int j = i; j < n; j++) {
         if (arr[j] == 1) {
            ++cnt1;
         }
         else {
            cnt0++;
         }
         maxDiff = max(maxDiff, cnt1 - cnt0);
      }
   }
   return zeroCnt + maxDiff;
}
int main(){
   int arr[] = {1, 1, 0, 0, 0, 0, 0};
   int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Maximum subarray size = " << getMaxSubArray(arr, n) << endl;
   return 0;
}