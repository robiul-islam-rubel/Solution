

#include <iostream>
using namespace std;

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void display(int array[], int k) {
  for (int i = 0; i < k; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void selection_Sort(int array[], int s) {
  for (int step= 0; step <s - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i<s; i++) {

      if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[step]);
  }
}

int main() {
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
  selection_Sort(a,n);

  display(a,n);
}
