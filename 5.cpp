#include<bits/stdc++.h>
using namespace std;
int binary_Search(int arr[], int l, int r, int key) {
   if (l <= r) {
      int mid = (l + r)/2;
      if (arr[mid] == key)
      return mid ;
      if (arr[mid] > key)
      return binary_Search(arr, l, mid-1, key);
      if (arr[mid] > key)
      return binary_Search(arr, mid+1, r, key);
   }
   if(l>r)
      return -1;
}
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  sort(a,a+n);
  int key;
  cin>>key;
   int index = binary_Search (a, 0, n-1, key);
   if(index == -1)
   cout<< key <<" is not present in the array "<<endl;
   else
   cout<< key <<" key is preset in the array "<<endl;
   return 0;
}
